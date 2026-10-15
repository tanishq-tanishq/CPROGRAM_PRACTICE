
#include<stdio.h>
#include<stdlib.h>

typedef struct Tickets {
    int ticketNo;
    char vehicle_Registration[20];
    float gross_weight;
    float tare_weight;
} Tickets;

float netWeight(Tickets *tickets) {
    return tickets->gross_weight - tickets->tare_weight;
}

void printDetails(Tickets *tickets) {
    printf("Ticket Number: %d\n", tickets->ticketNo);
    printf("Vehicle Registration: %s\n", tickets->vehicle_Registration);
    printf("Gross Weight: %.2f\n", tickets->gross_weight);
    printf("Tare Weight: %.2f\n", tickets->tare_weight);
    printf("Net Weight: %.2f\n", netWeight(tickets));
}

int main() {

    int n;
    printf("Enter the no. of tickets: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("INVALID VALUE\n");
        return 0;
    }

   
    Tickets *tickets = malloc(n * sizeof(Tickets));

    if (tickets == NULL) {
        printf("Memory Allocation Failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for ticket %d:\n", i + 1);

        printf("Ticket number: ");
        scanf("%d", &tickets[i].ticketNo);

        printf("Vehicle registration: ");
        scanf("%19s", tickets[i].vehicle_Registration);

        printf("Gross weight: ");
        scanf("%f", &tickets[i].gross_weight);

        printf("Tare weight: ");
        scanf("%f", &tickets[i].tare_weight);
    }

    float total_weight = 0;
    float max = netWeight(&tickets[0]);
    int maxIndex = 0;

    
    for (int i = 0; i < n; i++) {
        float net = netWeight(&tickets[i]);

        total_weight += net;

        if (net > max) {
            max = net;
            maxIndex = i;
        }
    }

    
    printf("ALL TICKET DETAILS:\n");

    for (int i = 0; i < n; i++) {
        printDetails(&tickets[i]);
    }

    printf("\nTotal Net Weight: %.2f\n", total_weight);

   
    printf("HEAVIEST LOAD TICKET:\n");
    printDetails(&tickets[maxIndex]);

    free(tickets);

    return 0;
}
