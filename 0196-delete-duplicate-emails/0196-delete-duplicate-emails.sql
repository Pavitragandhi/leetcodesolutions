# Write your MySQL query statement below
WITH Store AS(
    SELECT MIN(id) as min_id
    FROM Person
    GROUP BY email
)

DELETE FROM Person
WHERE id NOT IN (SELECT min_id FROM Store);