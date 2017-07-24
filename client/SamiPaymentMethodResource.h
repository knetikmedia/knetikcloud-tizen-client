/*
 * SamiPaymentMethodResource.h
 * 
 * 
 */

#ifndef SamiPaymentMethodResource_H_
#define SamiPaymentMethodResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPaymentMethodTypeResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiPaymentMethodResource: public SamiObject {
public:
    SamiPaymentMethodResource();
    SamiPaymentMethodResource(String* json);
    virtual ~SamiPaymentMethodResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPaymentMethodResource* fromJson(String* obj);

    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Boolean* getPDefault();
    void setPDefault(Boolean* pDefault);
    Boolean* getPDisabled();
    void setPDisabled(Boolean* pDisabled);
    Long* getPExpirationDate();
    void setPExpirationDate(Long* pExpiration_date);
    Integer* getPExpirationMonth();
    void setPExpirationMonth(Integer* pExpiration_month);
    Integer* getPExpirationYear();
    void setPExpirationYear(Integer* pExpiration_year);
    Long* getPId();
    void setPId(Long* pId);
    String* getPLast4();
    void setPLast4(String* pLast4);
    String* getPName();
    void setPName(String* pName);
    SamiPaymentMethodTypeResource* getPPaymentMethodType();
    void setPPaymentMethodType(SamiPaymentMethodTypeResource* pPayment_method_type);
    String* getPPaymentType();
    void setPPaymentType(String* pPayment_type);
    Integer* getPSort();
    void setPSort(Integer* pSort);
    String* getPToken();
    void setPToken(String* pToken);
    String* getPUniqueKey();
    void setPUniqueKey(String* pUnique_key);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    Boolean* getPVerified();
    void setPVerified(Boolean* pVerified);

private:
    Long* pCreated_date;
Boolean* pDefault;
Boolean* pDisabled;
Long* pExpiration_date;
Integer* pExpiration_month;
Integer* pExpiration_year;
Long* pId;
String* pLast4;
String* pName;
SamiPaymentMethodTypeResource* pPayment_method_type;
String* pPayment_type;
Integer* pSort;
String* pToken;
String* pUnique_key;
Long* pUpdated_date;
Integer* pUser_id;
Boolean* pVerified;
};

} /* namespace Swagger */

#endif /* SamiPaymentMethodResource_H_ */
