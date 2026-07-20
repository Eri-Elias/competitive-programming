-- https://www.hackerrank.com/challenges/salary-of-employees/problem
SELECT name 
FROM Employee as e
WHERE e.salary > 2000 and e.months < 10
ORDER BY e.employee_id ASC