-- https://www.hackerrank.com/challenges/the-pads/problem
SELECT CONCAT(name, '(', LEFT(occupation, 1), ')')
FROM occupations
ORDER BY name ASC;

SELECT CONCAT(
    "There are a total of",
    " ",
    COUNT(*),
    " ",
    LOWER(occupation),
    "s."
)
FROM occupations
GROUP BY occupation
ORDER BY COUNT(*) ASC, occupation ASC