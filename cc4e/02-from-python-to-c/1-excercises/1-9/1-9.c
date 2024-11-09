/*
Exercise 1-9.

How would you test the word count program? What are some boundaries?

Empty input: Run the program with no input to ensure it produces the correct output (i.e., 0 words, 0 lines, and 0 characters).
Single word: Input a single word to verify that the program counts it correctly.
Multiple words: Input multiple words separated by spaces to ensure the program counts each word individually.
Words with punctuation: Input words followed by punctuation marks (e.g., "word," or "word.") to verify that the program correctly counts the words.
Multiple spaces between words: Input multiple spaces between words to ensure the program ignores extra spaces.
Leading and trailing spaces: Input text with leading and trailing spaces to verify that the program ignores them.
Newlines: Input text with multiple newlines to ensure the program correctly counts the lines.
Non-ASCII characters: Input text with non-ASCII characters (e.g., accented letters, non-English characters) to verify that the program correctly counts the characters.
Very long input: Input a large amount of text to ensure the program can handle it without issues.

Boundary cases to consider:

Word length: Test with very short words (e.g., "a") and very long words (e.g., a long English word).
Line length: Test with very short lines (e.g., a single word) and very long lines (e.g., a paragraph).
Input size: Test with small inputs (e.g., a few words) and large inputs (e.g., a book).
Special characters: Test with special characters like tabs, carriage returns, and form feeds.
 */