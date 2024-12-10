echo "Enter the string :"
read string

echo "Enter the starting index:"
read start

echo "Enter the last index:"
read end


substring="${string:start:end-start+1}"

                              
echo "Substring = $substring"
echo "Length of the substring = ${#substring}"
