# Write your MySQL query statement below
SELECT e.name AS Employee, e.salary, d.name AS Department
FROM Employee as e JOIN Department as d
ON e.departmentId = d.id 
where
(select count(distinct e2.salary)
    FROM Employee e2
    WHERE e2.departmentId = e.departmentId
    AND e2.salary > e.salary
) < 3
ORDER BY  e.salary DESC;