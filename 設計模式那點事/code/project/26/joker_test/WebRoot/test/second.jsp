<%@ page language="java" pageEncoding="UTF-8"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">    
    <title>The Second Page</title>    
  </head>  
  <body> 
    Hello,<font color="red"> <%=request.getAttribute("name")%> <%=request.getAttribute("age")%> </font><%=request.getAttribute("message")%> <br>
    <a href="test/first.jk" >返回</a>
  </body>
</html>
