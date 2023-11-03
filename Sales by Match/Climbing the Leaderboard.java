import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'climbingLeaderboard' function below.
     *
     * The function is expected to return an INTEGER_ARRAY.
     * The function accepts following parameters:
     *  1. INTEGER_ARRAY ranked
     *  2. INTEGER_ARRAY player
     */

    public static List<Integer> climbingLeaderboard(List<Integer> ranked, List<Integer> player) {
    // Write your code here
         List<Integer> playerRanks = new ArrayList<>();
        List<Integer> uniqueRankedScores = new ArrayList<>();

        // Remove duplicate scores from the ranked leaderboard
        for (int i = 0; i < ranked.size(); i++) {
            if (i == 0 || !ranked.get(i).equals(ranked.get(i - 1))) {
                uniqueRankedScores.add(ranked.get(i));
            }
        }

        int currentRank = uniqueRankedScores.size() + 1; // Initialize currentRank to a value greater than the maximum rank

        int j = uniqueRankedScores.size() - 1; // Initialize j to the last index of uniqueRankedScores

        for (int playerScore : player) {
            // Decrease currentRank while the player's score is greater than or equal to the ranked score at index j
            while (j >= 0 && playerScore >= uniqueRankedScores.get(j)) {
                currentRank--;
                j--;
            }

            playerRanks.add(currentRank); // Add the current rank to the result list
        }

        return playerRanks;

    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int rankedCount = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> ranked = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        int playerCount = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> player = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        List<Integer> result = Result.climbingLeaderboard(ranked, player);

        bufferedWriter.write(
            result.stream()
                .map(Object::toString)
                .collect(joining("\n"))
            + "\n"
        );

        bufferedReader.close();
        bufferedWriter.close();
    }
}
