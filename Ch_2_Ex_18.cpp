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

	const int totalCus = 16500;
		const double recCus = 0.15;
		const double citrusCus = 0.58;

		const double totalrecCus = recCus * totalCus;
		const double totalcitrusCus = citrusCus * totalrecCus;

		cout << "This is the total of recurring customers: " << totalrecCus << endl;
		cout << "This is the total of customers who prefer citrus flavor: " << totalcitrusCus << endl;

			return 0;

}
