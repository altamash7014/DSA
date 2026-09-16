SELECT d.name AS Department, e.name AS Employee, e.salary AS Salary
FROM Employee e
left JOIN Department d
ON d.id = e.departmentId
WHERE (e.departmentId, e.salary) IN
(
    SELECT departmentId, MAX(salary)
    FROM Employee
    GROUP BY departmentId
);