echo "Enter the file name to search word:"
read file
echo "Enter the word:"
read word
echo "File before deleting the word:"
cat $file
grep -v -i $word $file > test
mv test  $file
echo "File after deleteing the lines containing the word :"
cat $file