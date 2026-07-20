SELECT name
FROM Students as s
WHERE s.marks > 75
ORDER BY RIGHT(name, 3) ASC, s.id ASC