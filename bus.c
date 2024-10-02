#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a bus
struct Bus {
    int busNumber;
    char route[50];
    int totalSeats;
    int availableSeats;
};

// Function to add a new bus to the system
void addBus(struct Bus *buses, int *numBuses) {
    printf("Enter Bus Number: ");
    scanf("%d", &buses[*numBuses].busNumber);

    printf("Enter Route: ");
    scanf("%s", buses[*numBuses].route);

    printf("Enter Total Seats: ");
    scanf("%d", &buses[*numBuses].totalSeats);

    buses[*numBuses].availableSeats = buses[*numBuses].totalSeats;

    (*numBuses)++;
}

// Function to display information about all buses
void displayBuses(struct Bus *buses, int numBuses) {
    printf("\nBus Information:\n");
    printf("---------------------------------------------------------\n");
    printf("| Bus Number | Route               | Total Seats | Available Seats |\n");
    printf("---------------------------------------------------------\n");

    for (int i = 0; i < numBuses; i++) {
        printf("| %-11d| %-20s| %-12d| %-15d|\n",
               buses[i].busNumber, buses[i].route, buses[i].totalSeats, buses[i].availableSeats);
    }

    printf("---------------------------------------------------------\n");
}

// Function to book a seat on a bus
void bookSeat(struct Bus *buses, int numBuses) {
    int busNumber, seatsToBook;

    printf("Enter Bus Number: ");
    scanf("%d", &busNumber);

    int index = -1;
    for (int i = 0; i < numBuses; i++) {
        if (buses[i].busNumber == busNumber) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Bus not found!\n");
        return;
    }

    printf("Enter Seats to Book: ");
    scanf("%d", &seatsToBook);

    if (seatsToBook > buses[index].availableSeats) {
        printf("Not enough available seats on the bus.\n");
    } else {
        buses[index].availableSeats -= seatsToBook;
        printf("Seats booked successfully!\n");
    }
}

int main() {
    struct Bus buses[50];  // Assuming a maximum of 50 buses in the system
    int numBuses = 0;
    int choice;

    do {
        printf("\nBus Management System\n");
        printf("1. Add Bus\n");
        printf("2. Display Buses\n");
        printf("3. Book Seat\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBus(buses, &numBuses);
                break;
            case 2:
                displayBuses(buses, numBuses);
                break;
            case 3:
                bookSeat(buses, numBuses);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);
    
    return 0;
}
