
#ifndef ___xfconf_marshal_MARSHAL_H__
#define ___xfconf_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:STRING,STRING,BOXED (./xfconf-marshal.list:1) */
extern void _xfconf_marshal_VOID__STRING_STRING_BOXED (GClosure     *closure,
                                                       GValue       *return_value,
                                                       guint         n_param_values,
                                                       const GValue *param_values,
                                                       gpointer      invocation_hint,
                                                       gpointer      marshal_data);

/* VOID:STRING,BOXED (./xfconf-marshal.list:2) */
extern void _xfconf_marshal_VOID__STRING_BOXED (GClosure     *closure,
                                                GValue       *return_value,
                                                guint         n_param_values,
                                                const GValue *param_values,
                                                gpointer      invocation_hint,
                                                gpointer      marshal_data);

/* VOID:STRING,STRING (./xfconf-marshal.list:3) */
extern void _xfconf_marshal_VOID__STRING_STRING (GClosure     *closure,
                                                 GValue       *return_value,
                                                 guint         n_param_values,
                                                 const GValue *param_values,
                                                 gpointer      invocation_hint,
                                                 gpointer      marshal_data);

G_END_DECLS

#endif /* ___xfconf_marshal_MARSHAL_H__ */

