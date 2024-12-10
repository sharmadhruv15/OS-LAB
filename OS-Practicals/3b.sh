echo "Enter the file to convert to lowe case:"
read file
if [ -f "$file" ]; then
tr '[a-z]' '[A-Z]' <"$file"> temp && mv temp "$file"
fi