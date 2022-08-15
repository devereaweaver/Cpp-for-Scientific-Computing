#include <iostream>

class Vector
{
	public:
		Vector(unsigned n)
		       : my_size{n}, data{new double[my_size]} {}

		/* Use a move constructor to ensure data isn't copied expensively */
		/* move constructor takes an r value and creates a Vector object using 
		 * the information from the rvalue, this allows for the creation of a Vector
		 * instance by calling the constructor with an rvalue instead of calling the 
		 * constructor with explicit values
		 */
		Vector(Vector&& v)    // take an rvalue ONLY
			: my_size(v.my_size), data(v.data)    // initialize new Vector object with rvalue data
		{
			// "hollow" out the rvalue information
			v.data = nullptr;
			v.my_size = 0;
			
			// NOTE: There needs to be some freeing of memory for this to actually be correct */ 
		}

		/* Move assignment - the move assignment simply swaps the pointers to the data*/
		Vector& operator=(Vector&& src)
		{
			/* swapping the data makes it such that the old object is now assigned to the 
			 * null data and the new object still steals the data from the old object, the 
			 * difference between this and the move constructor is that we don't have to 
			 * manually release our memory as once the function returns it will automatically
			 * delete the rvalue, which is now pointing to garbage memory
			 */
			assert(my_size==src.my_size);   // check vector sizes are equivalent
			delete[] data;    // free any used data
			data = src.data;    // move data from source to target
			src.data = nullptr;  // point source data to null 
			src.my_size = 0;     // null other source data
			return *this;     
		}

		~Vector(){delete[] data;}    // recall, data is pointing to an array in the heap
	private:
		unsigned my_size;
		double *data;
};

int main()
{
}

