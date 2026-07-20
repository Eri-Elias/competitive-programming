-- https://www.hackerrank.com/challenges/occupations/problem
SELECT
MAX(
    CASE
      WHEN occupation = 'Doctor' THEN name
    END
),
MAX(
    CASE
        WHEN occupation = 'Professor' THEN name
    END
),
MAX(
    CASE
        WHEN occupation = 'Singer' THEN name
    END
),
MAX(
    CASE
        WHEN occupation = 'Actor' THEN name
    END
)
FROM (
    SELECT
        name,
        occupation,
        ROW_NUMBER() OVER(
            PARTITION BY occupation
            ORDER BY name
        ) AS rn
    FROM occupations
) t
GROUP BY rn;