#include "List.cpp"

int main() {
	List<int> list;

	// Inserting elements into the list
	cout << "Inserting elements into the list" << endl;
	list.insert(5, true);
	list.insert(7, true);
	list.insert(4, true);
	list.insert(9, true);
	list.insert(10, false);
	list.print();
	
	// Deleting elements from the list
	cout << "Deleting first and last elements from the list" << endl;
	list.erase(1);
	list.erase(list.size());
	list.print();

	// Getting elements
	cout << "Getting first element" << endl;
	cout << list.get(1) << endl;

	// Printing elements of the list
	cout << "Printing elements of the list" << endl;
	list.print();
}