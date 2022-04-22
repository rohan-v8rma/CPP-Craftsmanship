#include <stdio.h>

struct bank_record 
{
    int account_number;
    char name[50];
    int account_balance;
};

void insufficient_balance(struct bank_record list_of_bank_records[], int number_of_records) {
    
    for(int index = 0; index < number_of_records; index++) {
        if (list_of_bank_records[index].account_balance < 100) {
            printf("%s %d\n", list_of_bank_records[index].name, list_of_bank_records[index].account_number);
        };
    }
}

int main() {
    int no_of_customers;
    scanf("%d", &no_of_customers);
    
    struct bank_record list_of_bank_records[no_of_customers];
    
    for(int record = 0; record < no_of_customers; record++) {
        scanf("%d", &list_of_bank_records[record].account_number);
        scanf("%s", list_of_bank_records[record].name); 
        //we don't use `&` over here because name of strings are already pointers (meaning, they act as addresses)
        scanf("%d", &list_of_bank_records[record].account_balance);
    }
    
    int input_account_number;
    // printf("Enter your account number");
    scanf("%d", &input_account_number);

    int withdraw_or_deposit;  
    // printf("\nEnter '0' for withdrawal and '1' for deposit: ");
    scanf("%d", &withdraw_or_deposit);

    int amount;
    // printf("\nEnter the amount you wish to withdraw/deposit");
    scanf("%d", &amount);

    for(int index = 0; index < no_of_customers; index++) {
        if (list_of_bank_records[index].account_number == input_account_number) {
            if (withdraw_or_deposit == 1) {
                list_of_bank_records[index].account_balance += amount;
                printf("%d\n", list_of_bank_records[index].account_balance);
            }
            else if (withdraw_or_deposit == 0) {
                if (list_of_bank_records[index].account_balance - amount < 100) {
                    printf("The balance is insufficient for the specified withdrawal\n");
                }
                else {
                    list_of_bank_records[index].account_balance -= amount;
                };
            }
        }
    }
    
    insufficient_balance(list_of_bank_records, no_of_customers);
    
    return 0;
}