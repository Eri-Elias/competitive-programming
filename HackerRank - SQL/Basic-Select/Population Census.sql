-- https://www.hackerrank.com/challenges/asian-population/problem

SELECT SUM(c.population)
FROM city c
INNER JOIN country cou 
ON cou.code = c.countrycode
WHERE cou.continent = 'Asia'