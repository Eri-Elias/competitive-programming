-- https://www.hackerrank.com/challenges/weather-observation-station-12/problem
SELECT DISTINCT CITY
FROM STATION
WHERE
    NOT(
        CITY LIKE '%a' OR
        CITY LIKE '%e' OR
        CITY LIKE '%i' OR
        CITY LIKE '%o' OR
        CITY LIKE '%u'
    )
    AND
    NOT(
        CITY LIKE 'a%' OR
        CITY LIKE 'e%' OR
        CITY LIKE 'i%' OR
        CITY LIKE 'o%' OR
        CITY LIKE 'u%'
    )