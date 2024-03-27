#include <iostream>

struct Node {
    int coefficient;
    int exponent;
    Node* next;
};

class Polynomial {
private:
    Node* head;

public:
    Polynomial() : head(nullptr) {}

    // Insert a term into the polynomial
    void insertTerm(int coefficient, int exponent) {
        Node* newNode = new Node{coefficient, exponent, nullptr};

        // If the list is empty or the new term has a higher exponent than the head
        if (head == nullptr || exponent > head->exponent) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;

            // Find the correct position to insert the new term
            while (current->next != nullptr && exponent < current->next->exponent) {
                current = current->next;
            }

            // Insert the new term
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Display the polynomial
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->coefficient << "x^" << current->exponent;
            if (current->next != nullptr) {
                std::cout << " + ";
            }
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Polynomial poly;

    // Insert terms into the polynomial
    poly.insertTerm(3, 4);
    poly.insertTerm(-2, 2);
    poly.insertTerm(5, 0);

    // Display the polynomial
    poly.display();

    return 0;
}
