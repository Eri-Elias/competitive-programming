-- https://www.hackerrank.com/challenges/average-population-of-each-continent/problem
SELECT COU.Continent, FLOOR(AVG(C.Population))
FROM CITY C
INNER JOIN COUNTRY COU
ON COU.CODE = C.COUNTRYCODE
GROUP BY COU.Continent