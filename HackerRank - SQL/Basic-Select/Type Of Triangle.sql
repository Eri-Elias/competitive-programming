SELECT
    CASE
        WHEN (A + B <= C) OR (A + C <= B) OR (B + C <= A) THEN 'Not A Triangle'
        WHEN (A = B AND A = C) THEN 'Equilateral'
        WHEN (A = B AND A != C) OR (A = C AND A != B) OR (B = C AND B != A) THEN 'Isosceles'
        ELSE 'Scalene'
    END
FROM TRIANGLES
