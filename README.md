# selection-sort-example
This project demonstrates the use of the selection sort algorithm to sort arrays of integers and structures. The selection sort algorithm is implemented as a template function that can sort arrays of any type, given a comparison function.

## Features

- Universal selection sort function using templates.
- Sorting arrays of integers.
- Sorting arrays of `Person` structures by age.

## Requirements

- C++11 or later
- CMake 3.10 or later

## Building the Project

1. Clone the repository:
   ```sh
   git clone https://github.com/lolkekahahha/selection-sort-example.git
   cd selection-sort-example
2. Create a build directory:
   mkdir build
   cd build
3. Run CMake to configure the project:
   cmake ..

4. Build the project:
   cmake --build .

5. Run the executable:
   ./selection_sort_example

## Usage
Enter the number of integers you want to sort.
Enter the integers.
Enter the number of persons you want to sort.
Enter the persons' names and ages.
The program will output the sorted arrays.

## Example

Enter the number of integers: 5
Enter the integers:
4 2 5 1 3
Sorted int array: 1 2 3 4 5
Enter the number of persons: 3
Enter the persons (name age):
Alice 30
Bob 25
Charlie 35
Sorted person array: Bob (25) Alice (30) Charlie (35)

## License
This project is licensed under the MIT License. See the LICENSE file for details.
