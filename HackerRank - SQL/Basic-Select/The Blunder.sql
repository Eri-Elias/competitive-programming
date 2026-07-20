-- https://www.hackerrank.com/challenges/the-blunder/problem
SELECT CEIL(
    AVG(SALARY) - AVG(CEIL(CAST(REPLACE(CAST(SALARY AS CHAR), '0', '')AS UNSIGNED))))
FROM EMPLOYEES