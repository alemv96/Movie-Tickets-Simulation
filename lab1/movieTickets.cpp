/**************************************************************************
************************** Username: c1010a02 *****************************
* ******************** Author: Alex Martinez Veloz ************************
************************** Date: 09/12/2019 *******************************
** Explaination: This application allows users to purchase movie tickets.**
***************************************************************************/
//SIDE NOTE: System("pause")probably doesn't work on your prompt, so it could give you a compile error

#include <iostream>
#include <string>
//using namespace std;

const double TICKET_PRICE = 9.95;
const double TAX_RATE = 0.095;
const std::string ADMIN_USERNAME = "Alex";
const int ADMIN_PASSWORD = 1234;
const int MAX_SEAT = 200;

int main(){

   int seatingLeft = MAX_SEAT;
   std::string movie_name  = "El chavo del 8 en acapulco"; // movie title
   std::string rating = "PG-13";
   int startHour = 3;
   int startMinute = 30;
   char ampm = 'P';
   int tickets;
   double subtotal,tax,total; // user's receipt.
   int option; //menu variables.
   bool flag;

  //Clean the screen.
    //system("cls");

      do {
        std::cout << "1) Press 1 to buy movie tickets \n"
                  << "2) Press 2 to exit from the program \n";
                //<< "3) Administrator options \n";
        std::cin >> option;

          if (option == 1)
          {
            flag = true;
            do {
              std::cout << "Now playing: \t " << movie_name << '\t' << "rated: \t" << rating <<'\n';
              std::cout << "Time: \t" << startHour << ": " << startMinute << " " << ampm <<'\n';
              std::cout << "Seats available : \t " << seatingLeft << '\n';
              std::cout << "How many tickets would you like to buy?" << '\n';
              std::cin >> tickets;

              if ( tickets <= 0 ){
                std::cout << "Please enter a valid value" << '\n';
                //System("pause");
                //system("clear");
              }
              else if (tickets > seatingLeft){
                std::cout << "Sorry but we don't have that many seats available" << '\n';
                //system("pause");
                //System("clear");
              }
              else
              {
                seatingLeft -= tickets;
                subtotal = TICKET_PRICE * tickets;
                tax = TAX_RATE * subtotal;
                total = tax + subtotal;
                //show the receipt:
                //system("cls");
                std::cout << "Movie name: \t" << movie_name << '\n';
                std::cout << "Tickets purchased: \t " << tickets << '\n';
                std::cout << "Subtotal: \t $"<< subtotal << '\n';
                std::cout << "Tax: \t $"<< tax << '\n';
                std::cout << "Total: \t $" << total << '\n';
                std::cout << "Thanks for using My Theatre's Ticketing Program" << '\n';
                flag = false;
                //system("pause");
                //system("cls");
              }
            }while(flag);
         }
          else{
            std::cout << "Thanks for visiting us, please come back!" << std::endl;
            //system ("pause");
          }

    }while(option != 2);

    return 0;
}
