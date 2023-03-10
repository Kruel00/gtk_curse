#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include <gtk/gtk.h>
#include <string.h>

typedef struct
{
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *button[17];

}calc;


static void activate(GtkApplication *app, gpointer user_data){
    calc widget;

    widget.window = gtk_application_window_new(app);
    gtk_window_set_position(GTK_WINDOW(widget.window),GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(windget.window),"calaciones pro");
    gtk_window_set_default_size(GTK_WINDOW(widget.window),200,200);
    gtk_container_set_border_width(GTK_CONTAINER(widget.window),10);
    gtk_widget_show_all(widget.window);
}

int main(int argc, char **argv){
    GtkApplication *app;

    gtk_init(&argc, &argv);
    int status;

    app = gtk_application_new("org.gtk.calculator",G_APPLICATION_FLAGS_NONE);

    g_signal_connect(app,"activate", G_CALLBACK(), NULL);
    status = g_application_run(G_APPLICATION(app),argc,argv);
    g_object_unref(app);

    printf("MAIN\n");
    return status;
}