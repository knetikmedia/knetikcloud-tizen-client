/*
 * SamiFlagResource.h
 * 
 * 
 */

#ifndef SamiFlagResource_H_
#define SamiFlagResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSimpleUserResource.h"
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiFlagResource: public SamiObject {
public:
    SamiFlagResource();
    SamiFlagResource(String* json);
    virtual ~SamiFlagResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFlagResource* fromJson(String* obj);

    String* getPContext();
    void setPContext(String* pContext);
    String* getPContextId();
    void setPContextId(String* pContext_id);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Long* getPId();
    void setPId(Long* pId);
    String* getPReason();
    void setPReason(String* pReason);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);

private:
    String* pContext;
String* pContext_id;
Long* pCreated_date;
Long* pId;
String* pReason;
Long* pUpdated_date;
SamiSimpleUserResource* pUser;
};

} /* namespace Swagger */

#endif /* SamiFlagResource_H_ */
