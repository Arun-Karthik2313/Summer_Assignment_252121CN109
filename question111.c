#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticket_id;
    char passenger_name[50];
    char destination[50];
    int seat_no;
};

int main() {
    int max_tickets = 100;
    struct Ticket bookings[max_tickets];
    int count = 0;
    int choice;
    int next_id = 101;

    while(1) {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book a Ticket\n");
        printf("2. Display All Bookings\n");
        printf("3. Cancel a Ticket\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count < max_tickets) {
                bookings[count].ticket_id = next_id;
                getchar(); // Clear buffer
                printf("Enter Passenger Name: ");
                scanf("%[^\n]", bookings[count].passenger_name);
                getchar(); // Clear buffer
                printf("Enter Destination: ");
                scanf("%[^\n]", bookings[count].destination);
                printf("Enter Seat Number: ");
                scanf("%d", &bookings[count].seat_no);
                
                printf("Ticket booked successfully! Your Ticket ID is %d\n", next_id);
                next_id++;
                count++;
            } else {
                printf("Booking registry full!\n");
            }
        } 
        else if(choice == 2) {
            if(count == 0) {
                printf("No booking history found.\n");
            } else {
                printf("\n%-12s %-20s %-20s %-8s\n", "Ticket ID", "Passenger Name", "Destination", "Seat No");
                printf("------------------------------------------------------------\n");
                for(int i = 0; i < count; i++) {
                    printf("%-12d %-20s %-20s %-8d\n", 
                           bookings[i].ticket_id, bookings[i].passenger_name, bookings[i].destination, bookings[i].seat_no);
                }
            }
        } 
        else if(choice == 3) {
            if(count == 0) {
                printf("No active reservations to cancel.\n");
            } else {
                int search_id, found = 0;
                printf("Enter Ticket ID to cancel: ");
                scanf("%d", &search_id);
                for(int i = 0; i < count; i++) {
                    if(bookings[i].ticket_id == search_id) {
                        found = 1;
                        for(int j = i; j < count - 1; j++) {
                            bookings[j] = bookings[j + 1];
                        }
                        count--;
                        printf("Ticket reservation cancelled successfully.\n");
                        break;
                    }
                }
                if(!found) printf("Ticket ID not found.\n");
            }
        } 
        else if(choice == 4) {
            printf("Exiting booking engine. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid parameters selected! Try again.\n");
        }
    }
    return 0;
}
