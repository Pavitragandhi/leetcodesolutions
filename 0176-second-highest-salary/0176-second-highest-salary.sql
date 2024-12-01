WITH RankedSalaries AS (
    SELECT salary,
           DENSE_RANK() OVER (ORDER BY salary DESC) AS `rank`
    FROM Employee
)
SELECT 
    (SELECT MIN(salary) FROM RankedSalaries WHERE `rank` = 2) AS SecondHighestSalary LIMIT 1;
