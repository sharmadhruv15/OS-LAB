echo "enter a file:"
read file
if test -f $file
then echo "Enterd file is an ordinary file"
elif test -d $file
then echo "Enterd file is a directory"
else
echo "This file does not exists"
fi