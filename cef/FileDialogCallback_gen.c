// Code generated - DO NOT EDIT.

#include "FileDialogCallback_gen.h"
#include "_cgo_export.h"

void gocef_set_file_dialog_callback_proxy(cef_file_dialog_callback_t *self) {
	// Casts to (void *) added to avoid warnings since Go callbacks can't have
	// some modifiers, such as 'const' applied to their parameter signatures.
	self->cont = (void *)&gocef_file_dialog_callback_cont;
	self->cancel = (void *)&gocef_file_dialog_callback_cancel;
}
