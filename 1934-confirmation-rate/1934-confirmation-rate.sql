# Write your MySQL query statement below
SELECT
    s.user_id,
    ROUND(
        IFNULL(SUM(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END)/COUNT(c.user_id) , 0) , 2) 
        as confirmation_rate
FROM
    Signups as s
LEFT JOIN
    Confirmations as c
ON
    s.user_id = c.user_id
GROUP BY
    s.user_id;
    