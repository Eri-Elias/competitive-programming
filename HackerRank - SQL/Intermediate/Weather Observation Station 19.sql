-- https://www.hackerrank.com/challenges/weather-observation-station-19/problem
WITH variaveis AS (
    SELECT 
        MIN(lat_n) AS a, 
        MAX(lat_n) AS b,
        MIN(long_w) AS c,
        MAX(long_w) AS d
    FROM station
),
CalculoFinal AS (
    SELECT
        POW(b - a, 2) AS diferenca_latn,
        POW(c - d, 2) AS diferenca_longw
    FROM variaveis
)
SELECT ROUND(SQRT(diferenca_latn + diferenca_longw), 4)
FROM CalculoFinal