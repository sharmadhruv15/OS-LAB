echo "Enter the file:"
read file
echo "Enter the starting index:"
read start
echo "Enter the ending index:"
read end
sed -n "$start,$end p" "$file"