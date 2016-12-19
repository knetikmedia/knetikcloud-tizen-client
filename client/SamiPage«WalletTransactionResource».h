/*
 * SamiPage«WalletTransactionResource».h
 * 
 * 
 */

#ifndef SamiPage«WalletTransactionResource»_H_
#define SamiPage«WalletTransactionResource»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSort.h"
#include "SamiWalletTransactionResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;


namespace Swagger {

class SamiPage«WalletTransactionResource»: public SamiObject {
public:
    SamiPage«WalletTransactionResource»();
    SamiPage«WalletTransactionResource»(String* json);
    virtual ~SamiPage«WalletTransactionResource»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPage«WalletTransactionResource»* fromJson(String* obj);

    IList* getPContent();
    void setPContent(IList* pContent);
    Boolean* getPFirst();
    void setPFirst(Boolean* pFirst);
    Boolean* getPLast();
    void setPLast(Boolean* pLast);
    Integer* getPNumber();
    void setPNumber(Integer* pNumber);
    Integer* getPNumberOfElements();
    void setPNumberOfElements(Integer* pNumber_of_elements);
    Integer* getPSize();
    void setPSize(Integer* pSize);
    SamiSort* getPSort();
    void setPSort(SamiSort* pSort);
    Long* getPTotalElements();
    void setPTotalElements(Long* pTotal_elements);
    Integer* getPTotalPages();
    void setPTotalPages(Integer* pTotal_pages);

private:
    IList* pContent;
Boolean* pFirst;
Boolean* pLast;
Integer* pNumber;
Integer* pNumber_of_elements;
Integer* pSize;
SamiSort* pSort;
Long* pTotal_elements;
Integer* pTotal_pages;
};

} /* namespace Swagger */

#endif /* SamiPage«WalletTransactionResource»_H_ */
