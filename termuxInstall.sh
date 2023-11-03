echo "Welcome to the Termux Install!"
echo "Building Executable..."

gcc src/sum.c -o sum
echo "The sum executable is ready!"

sleep 5
gcc src/substraction.c -o substraction

echo "The substraction is ready"

sleep 5

gcc src/multiplication.c -o multiplication

echo "The multiplication executable is ready"

sleep 5

gcc src/division.c -o division

echo "The division executable is ready!"

sleep 5

echo "now you can run the compiled operations"
