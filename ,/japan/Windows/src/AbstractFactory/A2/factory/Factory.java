package factory;

public abstract class Factory {
    public static Factory getFactory(String classname) {
        Factory factory = null;
        try {
            factory = (Factory)Class.forName(classname).newInstance();
        } catch (ClassNotFoundException e) {
            System.err.println("ÉNÉâÉX " + classname + " Ç™å©Ç¬Ç©ÇËÇ‹ÇπÇÒÅB");
        } catch (Exception e) {
            e.printStackTrace();
        }
        return factory;
    }
    public abstract Link createLink(String caption, String url);
    public abstract Tray createTray(String caption);
    public abstract Page createPage(String title, String author);
    public Page createYahooPage() {                                     
        Link link = createLink("Yahoo!", "http://www.yahoo.com/");      
        Page page = createPage("Yahoo!", "Yahoo!");                     
        page.add(link);                                                 
        return page;                                                    
    }                                                                   
}
