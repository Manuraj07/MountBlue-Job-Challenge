#include <iostream>
#include <vector>
#include <algorithm>

struct Customer {
    int orderNumber;
    int prepTime;
    int serveTime;
    int customerNumber;
};

bool compareCustomers(const Customer& a, const Customer& b) {
    if (a.serveTime == b.serveTime) {
        return a.customerNumber < b.customerNumber;
    }
    return a.serveTime < b.serveTime;
}

std::vector<int> jimOrders(std::vector<std::pair<int, int>> orders) {
    int n = orders.size();
    std::vector<Customer> customers(n);

    for (int i = 0; i < n; i++) {
        customers[i].orderNumber = orders[i].first;
        customers[i].prepTime = orders[i].second;
        customers[i].serveTime = customers[i].orderNumber + customers[i].prepTime;
        customers[i].customerNumber = i + 1;
    }

    // Sort customers based on serve time and customer number.
    std::sort(customers.begin(), customers.end(), compareCustomers);

    std::vector<int> result;
    for (const Customer& customer : customers) {
        result.push_back(customer.customerNumber);
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> orders(n);

    for (int i = 0; i < n; i++) {
        std::cin >> orders[i].first >> orders[i].second;
    }

    std::vector<int> deliveryOrder = jimOrders(orders);

    for (int i = 0; i < n; i++) {
        std::cout << deliveryOrder[i] << " ";
    }

    return 0;
}
