class Solution 
{
public:
    bool isValid(string word) 
    {
        if (word.length() < 3)
        {
            return false;
        } 

        bool hasVowel = false;
        bool hasConsonant = false;

        for (char c : word) 
        {
            if (!isalnum(c))
            {
                return false; // Check alphanumeric
            } 

            if (isalpha(c)) 
            {
                char lower = tolower(c);
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') 
                {
                    hasVowel = true;
                } 
                else 
                {
                    hasConsonant = true;
                }
            }

            if (hasVowel && hasConsonant)
            {
                continue;
            }
        }

        return hasVowel && hasConsonant;
    }
};