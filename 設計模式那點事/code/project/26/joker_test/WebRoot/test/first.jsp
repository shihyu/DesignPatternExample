<%@ page language="java" pageEncoding="UTF-8"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
	<head>
		<base href="<%=basePath%>">
		<title>The First Page</title>
	</head>

	<body>
	<form action="test/second.jk" method="post">
		name：<input type="text" name="name" value="<%=request.getAttribute("name") %>" /><br/>
		age：<input type="text" name="age" value="<%=request.getAttribute("age") %>" /><br/>	
		<input type="submit" value="下一步" />
	</form>
	</body>
</html>