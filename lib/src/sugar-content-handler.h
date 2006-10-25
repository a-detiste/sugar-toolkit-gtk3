#ifndef __SUGAR_CONTENT_HANDLER_H__
#define __SUGAR_CONTENT_HANDLER_H__

#include <nsCOMPtr.h>
#include <nsIHelperAppLauncherDialog.h>

#define G_SUGARCONTENTHANDLER_CID			     	 \
{ /* 2321843e-6377-11db-967b-00e08161165f */         \
    0x2321843e,                                      \
    0x6377,                                          \
    0x11db,                                          \
    {0x96, 0x7b, 0x0, 0xe0, 0x81, 0x61, 0x16, 0x5f}  \
}

class GSugarContentHandler : public nsIHelperAppLauncherDialog
{
  public:
	NS_DECL_ISUPPORTS
	NS_DECL_NSIHELPERAPPLAUNCHERDIALOG

	GSugarContentHandler();
	virtual ~GSugarContentHandler();
	
  private:

};

#endif /* __SUGAR_CONTENT_HANDLER_H */
