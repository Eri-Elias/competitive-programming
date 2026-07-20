SELECT ROUND(AVG(t1.Lat_n), 4) AS mediana
FROM(
    SELECT 
        *,
        ROW_NUMBER() OVER (ORDER BY Lat_n) AS row_num,
        COUNT(*) OVER() AS Total_rows
    FROM Station
) t1
WHERE t1.row_num IN(FLOOR((t1.Total_rows + 1)/2), CEIL(t1.total_rows + 1)/2)