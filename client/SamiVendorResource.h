/*
 * SamiVendorResource.h
 * 
 * 
 */

#ifndef SamiVendorResource_H_
#define SamiVendorResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiVendorResource: public SamiObject {
public:
    SamiVendorResource();
    SamiVendorResource(String* json);
    virtual ~SamiVendorResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVendorResource* fromJson(String* obj);

    Boolean* getPActive();
    void setPActive(Boolean* pActive);
    Long* getPCreateDate();
    void setPCreateDate(Long* pCreate_date);
    String* getPDescription();
    void setPDescription(String* pDescription);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPImageUrl();
    void setPImageUrl(String* pImage_url);
    Boolean* getPManualApproval();
    void setPManualApproval(Boolean* pManual_approval);
    String* getPName();
    void setPName(String* pName);
    String* getPPrimaryContactEmail();
    void setPPrimaryContactEmail(String* pPrimary_contact_email);
    String* getPPrimaryContactName();
    void setPPrimaryContactName(String* pPrimary_contact_name);
    String* getPPrimaryContactPhone();
    void setPPrimaryContactPhone(String* pPrimary_contact_phone);
    String* getPSalesEmail();
    void setPSalesEmail(String* pSales_email);
    String* getPSupportEmail();
    void setPSupportEmail(String* pSupport_email);
    Long* getPUpdateDate();
    void setPUpdateDate(Long* pUpdate_date);
    String* getPUrl();
    void setPUrl(String* pUrl);

private:
    Boolean* pActive;
Long* pCreate_date;
String* pDescription;
Integer* pId;
String* pImage_url;
Boolean* pManual_approval;
String* pName;
String* pPrimary_contact_email;
String* pPrimary_contact_name;
String* pPrimary_contact_phone;
String* pSales_email;
String* pSupport_email;
Long* pUpdate_date;
String* pUrl;
};

} /* namespace Swagger */

#endif /* SamiVendorResource_H_ */
