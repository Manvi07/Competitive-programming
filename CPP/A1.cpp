#include <iostream>
#include <cstring>

using namespace std;

template<class Item>
class LinearList{

	private:
		int MaxSize;
		Item *element;    // 1D dynamic array
		int len;
	public:
		/* Default constructor.
		 * Should create an empty list that not contain any elements*/
		LinearList(){element=new int(len+1);};

		/* This constructor should create a list containing MaxSize elements. You can intialize the elements with any values.*/
		LinearList(const int& MaxListSize){len=MaxListSize;};

		/* Destructor.
		 * Must free all the memory contained by the list */
		~LinearList(){free(element);};

		/* Indexing operator.
     		 * It should behave the same way array indexing does. i.e,
     		 * LinearList L;
     		 * L[0] should refer to the first element;
     		 * L[1] to the second element and so on.
     		 * */
		Item& operator[](const int& i){}; //return i'th element of list

		/* Returns true if the list is empty, false otherwise.
     		 * */
		bool isEmpty()
		{
			if(len==0)
				return true;
			else
				return false;
			};

		/* Returns the actual length (number of elements) in the list.
     		 * */
		int  length()
{
	return len;
};
		/* Returns the maximum size of the list.
     		 * */
		int  maxSize(){return MaxSize;};

		/* Returns the k-th element of the list.
		 * */
		Item  returnListElement(const int k){
			return element[k];
		};

		/* Set x to the k-th element and
		 * return true if k-th element is present otherwise return false.
		 * */
		bool find(const int k, Item& x){
			if(len>=k)
			{element[k-1]=x;return true;}
			else
			return false;
		};

		/* Search for x and
		 * return the position if found, else return 0.
		 * */
		int  search(Item& x)
{
	for(int i=0;i<len;i++)
	if(element[i]==x)
	return i+1;
	return 0;
};
		/* Set x to the k-th element and delete that k-th element.
		 * */
		void  deleteElement(const int  k, Item& x){
			x=element[k-1];
			free(element[k-1]);
		};

		/* Insert x after k-th element.
		 * */
		void  insert(const int  k, Item& x){
		};
};

template<class Item>
class Sort {
	private:

	public:
		void insertionSort(LinearList<Item>& A, int low, int high);
		void bubbleSort(LinearList<Item>& A, int low, int high);
	 	void rankSort(LinearList<Item>& A, int low, int high);
  	void selectionSort(LinearList<Item>& A, int low, int high);
		void mergeSort(LinearList<Item>& A, int low, int high);
  	void quickSort(LinearList<Item>& A, int low, int high);
  	void heapSort(LinearList<Item>& A, int low, int high);
};
Sort::insertionSort(LinearList<Item>& A,int low,int high)
{
	for(int i=low;i<=high;i++)
	{
		int key=A[i];
		for(int j=i+1;j<=high;++j)
		while(key>A[j])
		{

		}
	}
}
int main()
{}
