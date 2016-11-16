echo "Removing previous build..."
rm -f main.app
echo "Building..."
g++ -o main.app main.cpp
echo "Done!"
