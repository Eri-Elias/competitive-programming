-- https://www.hackerrank.com/challenges/weather-observation-station-3/problem
SELECT DISTINCT CITY
FROM STATION
WHERE ID % 2 = 0 -- se o resto for == 0 -> par
ORDER BY CITY ASC