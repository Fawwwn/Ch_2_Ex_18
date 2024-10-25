/* A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week.
Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus - flavored energy drinks. Write a program that displays the following :

• The approximate number of customers in the survey who purchase one or more energy drinks per week.

• The approximate number of customers in the survey who prefer citrus - flavored energy drinks.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so
that the user can enter the number of the number of customers that were surveyed
*/

#include <iostream>


int main()
{
	using std::cout;
	using std::cin; 
	using std::endl;

	int totalCus;
	double recCus;
	double citrusCus;

	cout << "How many people were surveyed? " << endl;
		cin >> totalCus;

		cout << "What is the percentage of people that purchased one or more drink per week? (Decimal Form) " << endl;
		cin >> recCus;

		cout << "What is the percentage of people who enjoy citrus? (Decimal Form)" << endl;
		cin >> citrusCus;

	 double totalrecCus = recCus * totalCus;
	 double totalcitrusCus = citrusCus * totalrecCus;

		cout << "This is the total of recurring customers: " << totalrecCus << endl;
		cout << "This is the total of customers who prefer citrus flavor: " << totalcitrusCus << endl;

			return 0;

}
