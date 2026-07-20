https://www.hackerrank.com/challenges/weather-observation-station-16/problem
SELECT ROUND(LAT_N, 4)
FROM STATION 
WHERE LAT_N > 38.778
ORDER BY LAT_N ASC
LIMIT 1