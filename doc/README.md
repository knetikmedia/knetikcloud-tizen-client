# Documentation for Knetik Platform API Documentation latest
 latest
 Tizen Client SDK

## How do I get the doc files?
First generate source code by running `swagger-codegen`
Then run `doc/generateDocumentation.sh` from the output folder. It will generate all the doc files and put them in the `doc/SDK` directory.
To successfully generate documentation it needs `Doxygen` installed in the path.
*Note* - Before generating the documentation, put the logo of the project as the file `doc/logo.png` before running `doxygen`.


## How do I use this?
This is the structure of the doc folder:

```
.
├── logo.png                  \\Logo of the project
├── Doxyfile                  \\Doxygen config files
├── generateDocumentation.sh  \\Script to run to generate documentation
├── README.md                 \\This file
├── SDK                       \\Documentation for all classes in Knetik Platform API Documentation latest
 Tizen Client SDK. See ./html/index.html
│   └── html

```

## *tl;dr* run this:

```
doc/generateDocumentation.sh
```

The above SDK folder will be generated. See the index.html inside the SDK folder.


## What's Doxygen?
Doxygen is the de facto standard tool for generating/extracting documentation from annotated/unannotated C++ sources, but it also supports other popular programming languages such as C, Objective-C, C#, PHP, Java, Python, IDL (Corba, Microsoft, and UNO/OpenOffice flavors), Fortran, VHDL, Tcl, and to some extent D.

Check out [Doxygen](https://www.doxygen.org/) for additional information about the Doxygen project.

## I Don't want to run Doxygen. What are the API files for accessing the REST endpoints?
All URIs are relative to https://sandbox.knetikcloud.comhttps://sandbox.knetikcloud.com

### AccessTokenManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getOAuthTokenSync* | *POST* /oauth/token | Get access token.
*getOAuthTokenASync* | *POST* /oauth/token | Get access token.

### ActivitiesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createActivitySync* | *POST* /activities | Create an activity.
*createActivityASync* | *POST* /activities | Create an activity.
*createActivityOccurrenceSync* | *POST* /activity-occurrences | Create a new activity occurrence. Ex: start a game.
*createActivityOccurrenceASync* | *POST* /activity-occurrences | Create a new activity occurrence. Ex: start a game.
*createActivityTemplateSync* | *POST* /activities/templates | Create a activity template.
*createActivityTemplateASync* | *POST* /activities/templates | Create a activity template.
*deleteActivitySync* | *DELETE* /activities/{id} | Delete an activity.
*deleteActivityASync* | *DELETE* /activities/{id} | Delete an activity.
*deleteActivityTemplateSync* | *DELETE* /activities/templates/{id} | Delete a activity template.
*deleteActivityTemplateASync* | *DELETE* /activities/templates/{id} | Delete a activity template.
*getActivitiesSync* | *GET* /activities | List activity definitions.
*getActivitiesASync* | *GET* /activities | List activity definitions.
*getActivitySync* | *GET* /activities/{id} | Get a single activity.
*getActivityASync* | *GET* /activities/{id} | Get a single activity.
*getActivityOccurrenceDetailsSync* | *GET* /activity-occurrences/{activity_occurrence_id} | Load a single activity occurrence details.
*getActivityOccurrenceDetailsASync* | *GET* /activity-occurrences/{activity_occurrence_id} | Load a single activity occurrence details.
*getActivityTemplateSync* | *GET* /activities/templates/{id} | Get a single activity template.
*getActivityTemplateASync* | *GET* /activities/templates/{id} | Get a single activity template.
*getActivityTemplatesSync* | *GET* /activities/templates | List and search activity templates.
*getActivityTemplatesASync* | *GET* /activities/templates | List and search activity templates.
*listActivityOccurrencesSync* | *GET* /activity-occurrences | List activity occurrences.
*listActivityOccurrencesASync* | *GET* /activity-occurrences | List activity occurrences.
*setActivityOccurrenceResultsSync* | *POST* /activity-occurrences/{activity_occurrence_id}/results | Sets the status of an activity occurrence to FINISHED and logs metrics.
*setActivityOccurrenceResultsASync* | *POST* /activity-occurrences/{activity_occurrence_id}/results | Sets the status of an activity occurrence to FINISHED and logs metrics.
*updateActivitySync* | *PUT* /activities/{id} | Update an activity.
*updateActivityASync* | *PUT* /activities/{id} | Update an activity.
*updateActivityOccurrenceSync* | *PUT* /activity-occurrences/{activity_occurrence_id}/status | Updated the status of an activity occurrence.
*updateActivityOccurrenceASync* | *PUT* /activity-occurrences/{activity_occurrence_id}/status | Updated the status of an activity occurrence.
*updateActivityTemplateSync* | *PUT* /activities/templates/{id} | Update an activity template.
*updateActivityTemplateASync* | *PUT* /activities/templates/{id} | Update an activity template.

### AmazonWebServicesS3Manager
Method | HTTP request | Description
------------- | ------------- | -------------
*getDownloadURLSync* | *GET* /amazon/s3/downloadurl | Get a temporary signed S3 URL for download.
*getDownloadURLASync* | *GET* /amazon/s3/downloadurl | Get a temporary signed S3 URL for download.
*getSignedS3URLSync* | *GET* /amazon/s3/signedposturl | Get a signed S3 URL for upload.
*getSignedS3URLASync* | *GET* /amazon/s3/signedposturl | Get a signed S3 URL for upload.

### AuthClientsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createClientSync* | *POST* /auth/clients | Create a new client.
*createClientASync* | *POST* /auth/clients | Create a new client.
*deleteClientSync* | *DELETE* /auth/clients/{client_key} | Delete a client.
*deleteClientASync* | *DELETE* /auth/clients/{client_key} | Delete a client.
*getClientSync* | *GET* /auth/clients/{client_key} | Get a single client.
*getClientASync* | *GET* /auth/clients/{client_key} | Get a single client.
*getClientGrantTypesSync* | *GET* /auth/clients/grant-types | List available client grant types.
*getClientGrantTypesASync* | *GET* /auth/clients/grant-types | List available client grant types.
*getClientsSync* | *GET* /auth/clients | List and search clients.
*getClientsASync* | *GET* /auth/clients | List and search clients.
*setClientGrantTypesSync* | *PUT* /auth/clients/{client_key}/grant-types | Set grant types for a client.
*setClientGrantTypesASync* | *PUT* /auth/clients/{client_key}/grant-types | Set grant types for a client.
*setClientRedirectUrisSync* | *PUT* /auth/clients/{client_key}/redirect-uris | Set redirect uris for a client.
*setClientRedirectUrisASync* | *PUT* /auth/clients/{client_key}/redirect-uris | Set redirect uris for a client.
*updateClientSync* | *PUT* /auth/clients/{client_key} | Update a client.
*updateClientASync* | *PUT* /auth/clients/{client_key} | Update a client.

### AuthPermissionsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createPermissionSync* | *POST* /auth/permissions | Create a new permission.
*createPermissionASync* | *POST* /auth/permissions | Create a new permission.
*deletePermissionSync* | *DELETE* /auth/permissions/{permission} | Delete a permission.
*deletePermissionASync* | *DELETE* /auth/permissions/{permission} | Delete a permission.
*getPermissionSync* | *GET* /auth/permissions/{permission} | Get a single permission.
*getPermissionASync* | *GET* /auth/permissions/{permission} | Get a single permission.
*getPermissionsSync* | *GET* /auth/permissions | List and search permissions.
*getPermissionsASync* | *GET* /auth/permissions | List and search permissions.
*updatePermissionSync* | *PUT* /auth/permissions/{permission} | Update a permission.
*updatePermissionASync* | *PUT* /auth/permissions/{permission} | Update a permission.

### AuthRolesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createRoleSync* | *POST* /auth/roles | Create a new role.
*createRoleASync* | *POST* /auth/roles | Create a new role.
*deleteRoleSync* | *DELETE* /auth/roles/{role} | Delete a role.
*deleteRoleASync* | *DELETE* /auth/roles/{role} | Delete a role.
*getClientRolesSync* | *GET* /auth/clients/{client_key}/roles | Get roles for a client.
*getClientRolesASync* | *GET* /auth/clients/{client_key}/roles | Get roles for a client.
*getRoleSync* | *GET* /auth/roles/{role} | Get a single role.
*getRoleASync* | *GET* /auth/roles/{role} | Get a single role.
*getRolesSync* | *GET* /auth/roles | List and search roles.
*getRolesASync* | *GET* /auth/roles | List and search roles.
*getUserRolesSync* | *GET* /auth/users/{user_id}/roles | Get roles for a user.
*getUserRolesASync* | *GET* /auth/users/{user_id}/roles | Get roles for a user.
*setClientRolesSync* | *PUT* /auth/clients/{client_key}/roles | Set roles for a client.
*setClientRolesASync* | *PUT* /auth/clients/{client_key}/roles | Set roles for a client.
*setPermissionsForRoleSync* | *PUT* /auth/roles/{role}/permissions | Set permissions for a role.
*setPermissionsForRoleASync* | *PUT* /auth/roles/{role}/permissions | Set permissions for a role.
*setUserRolesSync* | *PUT* /auth/users/{user_id}/roles | Set roles for a user.
*setUserRolesASync* | *PUT* /auth/users/{user_id}/roles | Set roles for a user.
*updateRoleSync* | *PUT* /auth/roles/{role} | Update a role.
*updateRoleASync* | *PUT* /auth/roles/{role} | Update a role.

### AuthTokensManager
Method | HTTP request | Description
------------- | ------------- | -------------
*deleteTokensSync* | *DELETE* /auth/tokens | Delete tokens by username, client id, or both.
*deleteTokensASync* | *DELETE* /auth/tokens | Delete tokens by username, client id, or both.
*getTokenSync* | *GET* /auth/tokens/{username}/{client_id} | Get a single token by username and client id.
*getTokenASync* | *GET* /auth/tokens/{username}/{client_id} | Get a single token by username and client id.
*getTokensSync* | *GET* /auth/tokens | List usernames and client ids.
*getTokensASync* | *GET* /auth/tokens | List usernames and client ids.

### BRERuleEngineActionsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getBREActionsSync* | *GET* /bre/actions | Get a list of available actions.
*getBREActionsASync* | *GET* /bre/actions | Get a list of available actions.

### BRERuleEngineCategoriesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createBRECategoryTemplateSync* | *POST* /bre/categories/templates | Create a BRE category template.
*createBRECategoryTemplateASync* | *POST* /bre/categories/templates | Create a BRE category template.
*deleteBRECategoryTemplateSync* | *DELETE* /bre/categories/templates/{id} | Delete a BRE category template.
*deleteBRECategoryTemplateASync* | *DELETE* /bre/categories/templates/{id} | Delete a BRE category template.
*getBRECategoriesSync* | *GET* /bre/categories | List categories.
*getBRECategoriesASync* | *GET* /bre/categories | List categories.
*getBRECategorySync* | *GET* /bre/categories/{name} | Get a single category.
*getBRECategoryASync* | *GET* /bre/categories/{name} | Get a single category.
*getBRECategoryTemplateSync* | *GET* /bre/categories/templates/{id} | Get a single BRE category template.
*getBRECategoryTemplateASync* | *GET* /bre/categories/templates/{id} | Get a single BRE category template.
*getBRECategoryTemplatesSync* | *GET* /bre/categories/templates | List and search BRE category templates.
*getBRECategoryTemplatesASync* | *GET* /bre/categories/templates | List and search BRE category templates.
*updateBRECategorySync* | *PUT* /bre/categories/{name} | Update a category.
*updateBRECategoryASync* | *PUT* /bre/categories/{name} | Update a category.
*updateBRECategoryTemplateSync* | *PUT* /bre/categories/templates/{id} | Update a BRE category template.
*updateBRECategoryTemplateASync* | *PUT* /bre/categories/templates/{id} | Update a BRE category template.

### BRERuleEngineEventsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*sendBREEventSync* | *POST* /bre/events | Fire a new event, based on an existing trigger.
*sendBREEventASync* | *POST* /bre/events | Fire a new event, based on an existing trigger.

### BRERuleEngineExpressionsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getBREExpressionSync* | *GET* /bre/expressions/{type} | Lookup a specific expression.
*getBREExpressionASync* | *GET* /bre/expressions/{type} | Lookup a specific expression.
*getBREExpressionsSync* | *GET* /bre/expressions | Get a list of supported expressions to use in conditions or actions..
*getBREExpressionsASync* | *GET* /bre/expressions | Get a list of supported expressions to use in conditions or actions..
*getExpressionAsTextSync* | *POST* /bre/expressions | Returns the textual representation of an expression.
*getExpressionAsTextASync* | *POST* /bre/expressions | Returns the textual representation of an expression.

### BRERuleEngineGlobalsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createBREGlobalSync* | *POST* /bre/globals/definitions | Create a global definition.
*createBREGlobalASync* | *POST* /bre/globals/definitions | Create a global definition.
*deleteBREGlobalSync* | *DELETE* /bre/globals/definitions/{id} | Delete a global.
*deleteBREGlobalASync* | *DELETE* /bre/globals/definitions/{id} | Delete a global.
*getBREGlobalSync* | *GET* /bre/globals/definitions/{id} | Get a single global definition.
*getBREGlobalASync* | *GET* /bre/globals/definitions/{id} | Get a single global definition.
*getBREGlobalsSync* | *GET* /bre/globals/definitions | List global definitions.
*getBREGlobalsASync* | *GET* /bre/globals/definitions | List global definitions.
*updateBREGlobalSync* | *PUT* /bre/globals/definitions/{id} | Update a global definition.
*updateBREGlobalASync* | *PUT* /bre/globals/definitions/{id} | Update a global definition.

### BRERuleEngineRulesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createBRERuleSync* | *POST* /bre/rules | Create a rule.
*createBRERuleASync* | *POST* /bre/rules | Create a rule.
*deleteBRERuleSync* | *DELETE* /bre/rules/{id} | Delete a rule.
*deleteBRERuleASync* | *DELETE* /bre/rules/{id} | Delete a rule.
*getBREExpressionAsStringSync* | *POST* /bre/rules/expression-as-string | Returns a string representation of the provided expression.
*getBREExpressionAsStringASync* | *POST* /bre/rules/expression-as-string | Returns a string representation of the provided expression.
*getBRERuleSync* | *GET* /bre/rules/{id} | Get a single rule.
*getBRERuleASync* | *GET* /bre/rules/{id} | Get a single rule.
*getBRERulesSync* | *GET* /bre/rules | List rules.
*getBRERulesASync* | *GET* /bre/rules | List rules.
*setBRERuleSync* | *PUT* /bre/rules/{id}/enabled | Enable or disable a rule.
*setBRERuleASync* | *PUT* /bre/rules/{id}/enabled | Enable or disable a rule.
*updateBRERuleSync* | *PUT* /bre/rules/{id} | Update a rule.
*updateBRERuleASync* | *PUT* /bre/rules/{id} | Update a rule.

### BRERuleEngineTriggersManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createBRETriggerSync* | *POST* /bre/triggers | Create a trigger.
*createBRETriggerASync* | *POST* /bre/triggers | Create a trigger.
*deleteBRETriggerSync* | *DELETE* /bre/triggers/{event_name} | Delete a trigger.
*deleteBRETriggerASync* | *DELETE* /bre/triggers/{event_name} | Delete a trigger.
*getBRETriggerSync* | *GET* /bre/triggers/{event_name} | Get a single trigger.
*getBRETriggerASync* | *GET* /bre/triggers/{event_name} | Get a single trigger.
*getBRETriggersSync* | *GET* /bre/triggers | List triggers.
*getBRETriggersASync* | *GET* /bre/triggers | List triggers.
*updateBRETriggerSync* | *PUT* /bre/triggers/{event_name} | Update a trigger.
*updateBRETriggerASync* | *PUT* /bre/triggers/{event_name} | Update a trigger.

### BRERuleEngineVariablesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getBREVariableTypesSync* | *GET* /bre/variable-types | Get a list of variable types available.
*getBREVariableTypesASync* | *GET* /bre/variable-types | Get a list of variable types available.
*getBREVariableValuesSync* | *GET* /bre/variable-types/{name}/values | List valid values for a type.
*getBREVariableValuesASync* | *GET* /bre/variable-types/{name}/values | List valid values for a type.

### CampaignsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addChallengeToCampaignSync* | *POST* /campaigns/{id}/challenges | Add a challenge to a campaign.
*addChallengeToCampaignASync* | *POST* /campaigns/{id}/challenges | Add a challenge to a campaign.
*createCampaignSync* | *POST* /campaigns | Create a campaign.
*createCampaignASync* | *POST* /campaigns | Create a campaign.
*createCampaignTemplateSync* | *POST* /campaigns/templates | Create a campaign template.
*createCampaignTemplateASync* | *POST* /campaigns/templates | Create a campaign template.
*deleteCampaignSync* | *DELETE* /campaigns/{id} | Delete a campaign.
*deleteCampaignASync* | *DELETE* /campaigns/{id} | Delete a campaign.
*deleteCampaignTemplateSync* | *DELETE* /campaigns/templates/{id} | Delete a campaign template.
*deleteCampaignTemplateASync* | *DELETE* /campaigns/templates/{id} | Delete a campaign template.
*getCampaignSync* | *GET* /campaigns/{id} | Returns a single campaign.
*getCampaignASync* | *GET* /campaigns/{id} | Returns a single campaign.
*getCampaignChallengesSync* | *GET* /campaigns/{id}/challenges | List the challenges associated with a campaign.
*getCampaignChallengesASync* | *GET* /campaigns/{id}/challenges | List the challenges associated with a campaign.
*getCampaignTemplateSync* | *GET* /campaigns/templates/{id} | Get a single campaign template.
*getCampaignTemplateASync* | *GET* /campaigns/templates/{id} | Get a single campaign template.
*getCampaignTemplatesSync* | *GET* /campaigns/templates | List and search campaign templates.
*getCampaignTemplatesASync* | *GET* /campaigns/templates | List and search campaign templates.
*getCampaignsSync* | *GET* /campaigns | List and search campaigns.
*getCampaignsASync* | *GET* /campaigns | List and search campaigns.
*removeChallengeFromCampaignSync* | *DELETE* /campaigns/{campaign_id}/challenges/{id} | Remove a challenge from a campaign.
*removeChallengeFromCampaignASync* | *DELETE* /campaigns/{campaign_id}/challenges/{id} | Remove a challenge from a campaign.
*updateCampaignSync* | *PUT* /campaigns/{id} | Update a campaign.
*updateCampaignASync* | *PUT* /campaigns/{id} | Update a campaign.
*updateCampaignTemplateSync* | *PUT* /campaigns/templates/{id} | Update an campaign template.
*updateCampaignTemplateASync* | *PUT* /campaigns/templates/{id} | Update an campaign template.

### CampaignsChallengesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createChallengeSync* | *POST* /challenges | Create a challenge.
*createChallengeASync* | *POST* /challenges | Create a challenge.
*createChallengeActivitySync* | *POST* /challenges/{challenge_id}/activities | Create a challenge activity.
*createChallengeActivityASync* | *POST* /challenges/{challenge_id}/activities | Create a challenge activity.
*createChallengeActivityTemplateSync* | *POST* /challenge-activities/templates | Create a challenge activity template.
*createChallengeActivityTemplateASync* | *POST* /challenge-activities/templates | Create a challenge activity template.
*createChallengeTemplateSync* | *POST* /challenges/templates | Create a challenge template.
*createChallengeTemplateASync* | *POST* /challenges/templates | Create a challenge template.
*deleteChallengeSync* | *DELETE* /challenges/{id} | Delete a challenge.
*deleteChallengeASync* | *DELETE* /challenges/{id} | Delete a challenge.
*deleteChallengeActivitySync* | *DELETE* /challenges/{challenge_id}/activities/{id} | Delete a challenge activity.
*deleteChallengeActivityASync* | *DELETE* /challenges/{challenge_id}/activities/{id} | Delete a challenge activity.
*deleteChallengeActivityTemplateSync* | *DELETE* /challenge-activities/templates/{id} | Delete a challenge activity template.
*deleteChallengeActivityTemplateASync* | *DELETE* /challenge-activities/templates/{id} | Delete a challenge activity template.
*deleteChallengeEventSync* | *DELETE* /challenges/events/{id} | Delete a challenge event.
*deleteChallengeEventASync* | *DELETE* /challenges/events/{id} | Delete a challenge event.
*deleteChallengeTemplateSync* | *DELETE* /challenges/templates/{id} | Delete a challenge template.
*deleteChallengeTemplateASync* | *DELETE* /challenges/templates/{id} | Delete a challenge template.
*getChallengeSync* | *GET* /challenges/{id} | Retrieve a challenge.
*getChallengeASync* | *GET* /challenges/{id} | Retrieve a challenge.
*getChallengeActivitiesSync* | *GET* /challenges/{challenge_id}/activities | List and search challenge activities.
*getChallengeActivitiesASync* | *GET* /challenges/{challenge_id}/activities | List and search challenge activities.
*getChallengeActivitySync* | *GET* /challenges/{challenge_id}/activities/{id} | Get a single challenge activity.
*getChallengeActivityASync* | *GET* /challenges/{challenge_id}/activities/{id} | Get a single challenge activity.
*getChallengeActivityTemplateSync* | *GET* /challenge-activities/templates/{id} | Get a single challenge activity template.
*getChallengeActivityTemplateASync* | *GET* /challenge-activities/templates/{id} | Get a single challenge activity template.
*getChallengeActivityTemplatesSync* | *GET* /challenge-activities/templates | List and search challenge activity templates.
*getChallengeActivityTemplatesASync* | *GET* /challenge-activities/templates | List and search challenge activity templates.
*getChallengeEventSync* | *GET* /challenges/events/{id} | Retrieve a single challenge event details.
*getChallengeEventASync* | *GET* /challenges/events/{id} | Retrieve a single challenge event details.
*getChallengeEventsSync* | *GET* /challenges/events | Retrieve a list of challenge events.
*getChallengeEventsASync* | *GET* /challenges/events | Retrieve a list of challenge events.
*getChallengeTemplateSync* | *GET* /challenges/templates/{id} | Get a single challenge template.
*getChallengeTemplateASync* | *GET* /challenges/templates/{id} | Get a single challenge template.
*getChallengeTemplatesSync* | *GET* /challenges/templates | List and search challenge templates.
*getChallengeTemplatesASync* | *GET* /challenges/templates | List and search challenge templates.
*getChallengesSync* | *GET* /challenges | Retrieve a list of challenges.
*getChallengesASync* | *GET* /challenges | Retrieve a list of challenges.
*updateChallengeSync* | *PUT* /challenges/{id} | Update a challenge.
*updateChallengeASync* | *PUT* /challenges/{id} | Update a challenge.
*updateChallengeActivitySync* | *PUT* /challenges/{challenge_id}/activities/{id} | Update a challenge activity.
*updateChallengeActivityASync* | *PUT* /challenges/{challenge_id}/activities/{id} | Update a challenge activity.
*updateChallengeActivityTemplateSync* | *PUT* /challenge-activities/templates/{id} | Update an challenge activity template.
*updateChallengeActivityTemplateASync* | *PUT* /challenge-activities/templates/{id} | Update an challenge activity template.
*updateChallengeTemplateSync* | *PUT* /challenges/templates/{id} | Update a challenge template.
*updateChallengeTemplateASync* | *PUT* /challenges/templates/{id} | Update a challenge template.

### CampaignsRewardsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createRewardSetSync* | *POST* /rewards | Create a reward set.
*createRewardSetASync* | *POST* /rewards | Create a reward set.
*deleteRewardSetSync* | *DELETE* /rewards/{id} | Delete a reward set.
*deleteRewardSetASync* | *DELETE* /rewards/{id} | Delete a reward set.
*getRewardSetSync* | *GET* /rewards/{id} | Get a single reward set.
*getRewardSetASync* | *GET* /rewards/{id} | Get a single reward set.
*getRewardSetsSync* | *GET* /rewards | List and search reward sets.
*getRewardSetsASync* | *GET* /rewards | List and search reward sets.
*updateRewardSetSync* | *PUT* /rewards/{id} | Update a reward set.
*updateRewardSetASync* | *PUT* /rewards/{id} | Update a reward set.

### CategoriesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createCategorySync* | *POST* /categories | Create a new category.
*createCategoryASync* | *POST* /categories | Create a new category.
*createCategoryTemplateSync* | *POST* /categories/templates | Create a category template.
*createCategoryTemplateASync* | *POST* /categories/templates | Create a category template.
*deleteCategorySync* | *DELETE* /categories/{id} | Delete an existing category.
*deleteCategoryASync* | *DELETE* /categories/{id} | Delete an existing category.
*deleteCategoryTemplateSync* | *DELETE* /categories/templates/{id} | Delete a category template.
*deleteCategoryTemplateASync* | *DELETE* /categories/templates/{id} | Delete a category template.
*getCategoriesSync* | *GET* /categories | List and search categories with optional filters.
*getCategoriesASync* | *GET* /categories | List and search categories with optional filters.
*getCategorySync* | *GET* /categories/{id} | Get a single category.
*getCategoryASync* | *GET* /categories/{id} | Get a single category.
*getCategoryTemplateSync* | *GET* /categories/templates/{id} | Get a single category template.
*getCategoryTemplateASync* | *GET* /categories/templates/{id} | Get a single category template.
*getCategoryTemplatesSync* | *GET* /categories/templates | List and search category templates.
*getCategoryTemplatesASync* | *GET* /categories/templates | List and search category templates.
*getTagsSync* | *GET* /tags | List all trivia tags in the system.
*getTagsASync* | *GET* /tags | List all trivia tags in the system.
*updateCategorySync* | *PUT* /categories/{id} | Update an existing category.
*updateCategoryASync* | *PUT* /categories/{id} | Update an existing category.
*updateCategoryTemplateSync* | *PUT* /categories/templates/{id} | Update a category template.
*updateCategoryTemplateASync* | *PUT* /categories/templates/{id} | Update a category template.

### ConfigsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createConfigSync* | *POST* /configs | Create a new config.
*createConfigASync* | *POST* /configs | Create a new config.
*deleteConfigSync* | *DELETE* /configs/{name} | Delete an existing config.
*deleteConfigASync* | *DELETE* /configs/{name} | Delete an existing config.
*getConfigSync* | *GET* /configs/{name} | Get a single config.
*getConfigASync* | *GET* /configs/{name} | Get a single config.
*getConfigsSync* | *GET* /configs | List and search configs.
*getConfigsASync* | *GET* /configs | List and search configs.
*updateConfigSync* | *PUT* /configs/{name} | Update an existing config.
*updateConfigASync* | *PUT* /configs/{name} | Update an existing config.

### ContentArticlesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createArticleSync* | *POST* /content/articles | Create a new article.
*createArticleASync* | *POST* /content/articles | Create a new article.
*createArticleTemplateSync* | *POST* /content/articles/templates | Create an article template.
*createArticleTemplateASync* | *POST* /content/articles/templates | Create an article template.
*deleteArticleSync* | *DELETE* /content/articles/{id} | Delete an existing article.
*deleteArticleASync* | *DELETE* /content/articles/{id} | Delete an existing article.
*deleteArticleTemplateSync* | *DELETE* /content/articles/templates/{id} | Delete an article template.
*deleteArticleTemplateASync* | *DELETE* /content/articles/templates/{id} | Delete an article template.
*getArticleSync* | *GET* /content/articles/{id} | Get a single article.
*getArticleASync* | *GET* /content/articles/{id} | Get a single article.
*getArticleTemplateSync* | *GET* /content/articles/templates/{id} | Get a single article template.
*getArticleTemplateASync* | *GET* /content/articles/templates/{id} | Get a single article template.
*getArticleTemplatesSync* | *GET* /content/articles/templates | List and search article templates.
*getArticleTemplatesASync* | *GET* /content/articles/templates | List and search article templates.
*getArticlesSync* | *GET* /content/articles | List and search articles.
*getArticlesASync* | *GET* /content/articles | List and search articles.
*updateArticleSync* | *PUT* /content/articles/{id} | Update an existing article.
*updateArticleASync* | *PUT* /content/articles/{id} | Update an existing article.
*updateArticleTemplateSync* | *PUT* /content/articles/templates/{id} | Update an article template.
*updateArticleTemplateASync* | *PUT* /content/articles/templates/{id} | Update an article template.

### ContentCommentsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addCommentSync* | *POST* /comments | Add a new comment.
*addCommentASync* | *POST* /comments | Add a new comment.
*deleteCommentSync* | *DELETE* /comments/{id} | Delete a comment.
*deleteCommentASync* | *DELETE* /comments/{id} | Delete a comment.
*getCommentSync* | *GET* /comments/{id} | Return a comment.
*getCommentASync* | *GET* /comments/{id} | Return a comment.
*getCommentsSync* | *GET* /comments | Returns a page of comments.
*getCommentsASync* | *GET* /comments | Returns a page of comments.
*searchCommentsSync* | *POST* /comments/search | Search the comment index.
*searchCommentsASync* | *POST* /comments/search | Search the comment index.
*updateCommentSync* | *PUT* /comments/{id}/content | Update a comment.
*updateCommentASync* | *PUT* /comments/{id}/content | Update a comment.

### ContentPollsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*answerPollSync* | *POST* /media/polls/{id}/response | Add your vote to a poll.
*answerPollASync* | *POST* /media/polls/{id}/response | Add your vote to a poll.
*createPollSync* | *POST* /media/polls | Create a new poll.
*createPollASync* | *POST* /media/polls | Create a new poll.
*createPollTemplateSync* | *POST* /media/polls/templates | Create a poll template.
*createPollTemplateASync* | *POST* /media/polls/templates | Create a poll template.
*deletePollSync* | *DELETE* /media/polls/{id} | Delete an existing poll.
*deletePollASync* | *DELETE* /media/polls/{id} | Delete an existing poll.
*deletePollTemplateSync* | *DELETE* /media/polls/templates/{id} | Delete a poll template.
*deletePollTemplateASync* | *DELETE* /media/polls/templates/{id} | Delete a poll template.
*getPollSync* | *GET* /media/polls/{id} | Get a single poll.
*getPollASync* | *GET* /media/polls/{id} | Get a single poll.
*getPollAnswerSync* | *GET* /media/polls/{id}/response | Get poll answer.
*getPollAnswerASync* | *GET* /media/polls/{id}/response | Get poll answer.
*getPollTemplateSync* | *GET* /media/polls/templates/{id} | Get a single poll template.
*getPollTemplateASync* | *GET* /media/polls/templates/{id} | Get a single poll template.
*getPollTemplatesSync* | *GET* /media/polls/templates | List and search poll templates.
*getPollTemplatesASync* | *GET* /media/polls/templates | List and search poll templates.
*getPollsSync* | *GET* /media/polls | List and search polls.
*getPollsASync* | *GET* /media/polls | List and search polls.
*updatePollSync* | *PUT* /media/polls/{id} | Update an existing poll.
*updatePollASync* | *PUT* /media/polls/{id} | Update an existing poll.
*updatePollTemplateSync* | *PUT* /media/polls/templates/{id} | Update a poll template.
*updatePollTemplateASync* | *PUT* /media/polls/templates/{id} | Update a poll template.

### CurrenciesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createCurrencySync* | *POST* /currencies | Create a currency.
*createCurrencyASync* | *POST* /currencies | Create a currency.
*deleteCurrencySync* | *DELETE* /currencies/{code} | Delete a currency.
*deleteCurrencyASync* | *DELETE* /currencies/{code} | Delete a currency.
*getCurrenciesSync* | *GET* /currencies | List and search currencies.
*getCurrenciesASync* | *GET* /currencies | List and search currencies.
*getCurrencySync* | *GET* /currencies/{code} | Get a single currency.
*getCurrencyASync* | *GET* /currencies/{code} | Get a single currency.
*updateCurrencySync* | *PUT* /currencies/{code} | Update a currency.
*updateCurrencyASync* | *PUT* /currencies/{code} | Update a currency.

### DevicesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addDeviceUsersSync* | *POST* /devices/{id}/users | Add device users.
*addDeviceUsersASync* | *POST* /devices/{id}/users | Add device users.
*createDeviceSync* | *POST* /devices | Create a device.
*createDeviceASync* | *POST* /devices | Create a device.
*createDeviceTemplateSync* | *POST* /devices/templates | Create a device template.
*createDeviceTemplateASync* | *POST* /devices/templates | Create a device template.
*deleteDeviceSync* | *DELETE* /devices/{id} | Delete a device.
*deleteDeviceASync* | *DELETE* /devices/{id} | Delete a device.
*deleteDeviceTemplateSync* | *DELETE* /devices/templates/{id} | Delete an device template.
*deleteDeviceTemplateASync* | *DELETE* /devices/templates/{id} | Delete an device template.
*deleteDeviceUserSync* | *DELETE* /devices/{id}/users/{user_id} | Delete a device user.
*deleteDeviceUserASync* | *DELETE* /devices/{id}/users/{user_id} | Delete a device user.
*deleteDeviceUsersSync* | *DELETE* /devices/{id}/users | Delete all device users.
*deleteDeviceUsersASync* | *DELETE* /devices/{id}/users | Delete all device users.
*getDeviceSync* | *GET* /devices/{id} | Get a single device.
*getDeviceASync* | *GET* /devices/{id} | Get a single device.
*getDeviceTemplateSync* | *GET* /devices/templates/{id} | Get a single device template.
*getDeviceTemplateASync* | *GET* /devices/templates/{id} | Get a single device template.
*getDeviceTemplatesSync* | *GET* /devices/templates | List and search device templates.
*getDeviceTemplatesASync* | *GET* /devices/templates | List and search device templates.
*getDevicesSync* | *GET* /devices | List and search devices.
*getDevicesASync* | *GET* /devices | List and search devices.
*updateDeviceSync* | *PUT* /devices/{id} | Update a device.
*updateDeviceASync* | *PUT* /devices/{id} | Update a device.
*updateDeviceTemplateSync* | *PUT* /devices/templates/{id} | Update an device template.
*updateDeviceTemplateASync* | *PUT* /devices/templates/{id} | Update an device template.

### DispositionsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addDispositionSync* | *POST* /dispositions | Add a new disposition.
*addDispositionASync* | *POST* /dispositions | Add a new disposition.
*deleteDispositionSync* | *DELETE* /dispositions/{id} | Delete a disposition.
*deleteDispositionASync* | *DELETE* /dispositions/{id} | Delete a disposition.
*getDispositionSync* | *GET* /dispositions/{id} | Returns a disposition.
*getDispositionASync* | *GET* /dispositions/{id} | Returns a disposition.
*getDispositionCountsSync* | *GET* /dispositions/count | Returns a list of disposition counts.
*getDispositionCountsASync* | *GET* /dispositions/count | Returns a list of disposition counts.
*getDispositionsSync* | *GET* /dispositions | Returns a page of dispositions.
*getDispositionsASync* | *GET* /dispositions | Returns a page of dispositions.

### FulfillmentManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createFulfillmentTypeSync* | *POST* /store/fulfillment/types | Create a fulfillment type.
*createFulfillmentTypeASync* | *POST* /store/fulfillment/types | Create a fulfillment type.
*deleteFulfillmentTypeSync* | *DELETE* /store/fulfillment/types/{id} | Delete a fulfillment type.
*deleteFulfillmentTypeASync* | *DELETE* /store/fulfillment/types/{id} | Delete a fulfillment type.
*getFulfillmentTypeSync* | *GET* /store/fulfillment/types/{id} | Get a single fulfillment type.
*getFulfillmentTypeASync* | *GET* /store/fulfillment/types/{id} | Get a single fulfillment type.
*getFulfillmentTypesSync* | *GET* /store/fulfillment/types | List and search fulfillment types.
*getFulfillmentTypesASync* | *GET* /store/fulfillment/types | List and search fulfillment types.
*updateFulfillmentTypeSync* | *PUT* /store/fulfillment/types/{id} | Update a fulfillment type.
*updateFulfillmentTypeASync* | *PUT* /store/fulfillment/types/{id} | Update a fulfillment type.

### GamificationAchievementsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createAchievementSync* | *POST* /achievements | Create a new achievement definition.
*createAchievementASync* | *POST* /achievements | Create a new achievement definition.
*createAchievementTemplateSync* | *POST* /achievements/templates | Create an achievement template.
*createAchievementTemplateASync* | *POST* /achievements/templates | Create an achievement template.
*deleteAchievementSync* | *DELETE* /achievements/{name} | Delete an achievement definition.
*deleteAchievementASync* | *DELETE* /achievements/{name} | Delete an achievement definition.
*deleteAchievementTemplateSync* | *DELETE* /achievements/templates/{id} | Delete an achievement template.
*deleteAchievementTemplateASync* | *DELETE* /achievements/templates/{id} | Delete an achievement template.
*getAchievementSync* | *GET* /achievements/{name} | Get a single achievement definition.
*getAchievementASync* | *GET* /achievements/{name} | Get a single achievement definition.
*getAchievementTemplateSync* | *GET* /achievements/templates/{id} | Get a single achievement template.
*getAchievementTemplateASync* | *GET* /achievements/templates/{id} | Get a single achievement template.
*getAchievementTemplatesSync* | *GET* /achievements/templates | List and search achievement templates.
*getAchievementTemplatesASync* | *GET* /achievements/templates | List and search achievement templates.
*getAchievementTriggersSync* | *GET* /achievements/triggers | Get the list of triggers that can be used to trigger an achievement progress update.
*getAchievementTriggersASync* | *GET* /achievements/triggers | Get the list of triggers that can be used to trigger an achievement progress update.
*getAchievementsSync* | *GET* /achievements | Get all achievement definitions in the system.
*getAchievementsASync* | *GET* /achievements | Get all achievement definitions in the system.
*getDerivedAchievementsSync* | *GET* /achievements/derived/{name} | Get a list of derived achievements.
*getDerivedAchievementsASync* | *GET* /achievements/derived/{name} | Get a list of derived achievements.
*getUserAchievementProgressSync* | *GET* /users/{user_id}/achievements/{achievement_name} | Retrieve progress on a given achievement for a given user.
*getUserAchievementProgressASync* | *GET* /users/{user_id}/achievements/{achievement_name} | Retrieve progress on a given achievement for a given user.
*getUserAchievementsProgressSync* | *GET* /users/{user_id}/achievements | Retrieve progress on achievements for a given user.
*getUserAchievementsProgressASync* | *GET* /users/{user_id}/achievements | Retrieve progress on achievements for a given user.
*getUsersAchievementProgressSync* | *GET* /users/achievements/{achievement_name} | Retrieve progress on a given achievement for all users.
*getUsersAchievementProgressASync* | *GET* /users/achievements/{achievement_name} | Retrieve progress on a given achievement for all users.
*getUsersAchievementsProgressSync* | *GET* /users/achievements | Retrieve progress on achievements for all users.
*getUsersAchievementsProgressASync* | *GET* /users/achievements | Retrieve progress on achievements for all users.
*incrementAchievementProgressSync* | *POST* /users/{user_id}/achievements/{achievement_name}/progress | Increment an achievement progress record for a user.
*incrementAchievementProgressASync* | *POST* /users/{user_id}/achievements/{achievement_name}/progress | Increment an achievement progress record for a user.
*setAchievementProgressSync* | *PUT* /users/{user_id}/achievements/{achievement_name}/progress | Set an achievement progress record for a user.
*setAchievementProgressASync* | *PUT* /users/{user_id}/achievements/{achievement_name}/progress | Set an achievement progress record for a user.
*updateAchievementSync* | *PUT* /achievements/{name} | Update an achievement definition.
*updateAchievementASync* | *PUT* /achievements/{name} | Update an achievement definition.
*updateAchievementTemplateSync* | *PUT* /achievements/templates/{id} | Update an achievement template.
*updateAchievementTemplateASync* | *PUT* /achievements/templates/{id} | Update an achievement template.

### GamificationLeaderboardsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getLeaderboardSync* | *GET* /leaderboards/{context_type}/{context_id} | Retrieves leaderboard details and paginated entries.
*getLeaderboardASync* | *GET* /leaderboards/{context_type}/{context_id} | Retrieves leaderboard details and paginated entries.
*getLeaderboardRankSync* | *GET* /leaderboards/{context_type}/{context_id}/users/{id}/rank | Retrieves a specific user entry with rank.
*getLeaderboardRankASync* | *GET* /leaderboards/{context_type}/{context_id}/users/{id}/rank | Retrieves a specific user entry with rank.
*getLeaderboardStrategiesSync* | *GET* /leaderboards/strategies | Get a list of available leaderboard strategy names.
*getLeaderboardStrategiesASync* | *GET* /leaderboards/strategies | Get a list of available leaderboard strategy names.

### GamificationLevelingManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createLevelSync* | *POST* /leveling | Create a level schema.
*createLevelASync* | *POST* /leveling | Create a level schema.
*deleteLevelSync* | *DELETE* /leveling/{name} | Delete a level.
*deleteLevelASync* | *DELETE* /leveling/{name} | Delete a level.
*getLevelSync* | *GET* /leveling/{name} | Retrieve a level.
*getLevelASync* | *GET* /leveling/{name} | Retrieve a level.
*getLevelTriggersSync* | *GET* /leveling/triggers | Get the list of triggers that can be used to trigger a leveling progress update.
*getLevelTriggersASync* | *GET* /leveling/triggers | Get the list of triggers that can be used to trigger a leveling progress update.
*getLevelsSync* | *GET* /leveling | List and search levels.
*getLevelsASync* | *GET* /leveling | List and search levels.
*getUserLevelSync* | *GET* /users/{user_id}/leveling/{name} | Get a user's progress for a given level schema.
*getUserLevelASync* | *GET* /users/{user_id}/leveling/{name} | Get a user's progress for a given level schema.
*getUserLevelsSync* | *GET* /users/{user_id}/leveling | Get a user's progress for all level schemas.
*getUserLevelsASync* | *GET* /users/{user_id}/leveling | Get a user's progress for all level schemas.
*incrementProgressSync* | *POST* /users/{user_id}/leveling/{name}/progress | Update or create a leveling progress record for a user.
*incrementProgressASync* | *POST* /users/{user_id}/leveling/{name}/progress | Update or create a leveling progress record for a user.
*setProgressSync* | *PUT* /users/{user_id}/leveling/{name}/progress | Set leveling progress for a user.
*setProgressASync* | *PUT* /users/{user_id}/leveling/{name}/progress | Set leveling progress for a user.
*updateLevelSync* | *PUT* /leveling/{name} | Update a level.
*updateLevelASync* | *PUT* /leveling/{name} | Update a level.

### GamificationMetricsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addMetricSync* | *POST* /metrics | Add a metric.
*addMetricASync* | *POST* /metrics | Add a metric.

### GamificationTriviaManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addQuestionAnswersSync* | *POST* /trivia/questions/{question_id}/answers | Add an answer to a question.
*addQuestionAnswersASync* | *POST* /trivia/questions/{question_id}/answers | Add an answer to a question.
*addQuestionTagSync* | *POST* /trivia/questions/{id}/tags | Add a tag to a question.
*addQuestionTagASync* | *POST* /trivia/questions/{id}/tags | Add a tag to a question.
*addTagToQuestionsBatchSync* | *POST* /trivia/questions/tags | Add a tag to a batch of questions.
*addTagToQuestionsBatchASync* | *POST* /trivia/questions/tags | Add a tag to a batch of questions.
*createImportJobSync* | *POST* /trivia/import | Create an import job.
*createImportJobASync* | *POST* /trivia/import | Create an import job.
*createQuestionSync* | *POST* /trivia/questions | Create a question.
*createQuestionASync* | *POST* /trivia/questions | Create a question.
*createQuestionTemplateSync* | *POST* /trivia/questions/templates | Create a question template.
*createQuestionTemplateASync* | *POST* /trivia/questions/templates | Create a question template.
*deleteImportJobSync* | *DELETE* /trivia/import/{id} | Delete an import job.
*deleteImportJobASync* | *DELETE* /trivia/import/{id} | Delete an import job.
*deleteQuestionSync* | *DELETE* /trivia/questions/{id} | Delete a question.
*deleteQuestionASync* | *DELETE* /trivia/questions/{id} | Delete a question.
*deleteQuestionAnswersSync* | *DELETE* /trivia/questions/{question_id}/answers/{id} | Remove an answer from a question.
*deleteQuestionAnswersASync* | *DELETE* /trivia/questions/{question_id}/answers/{id} | Remove an answer from a question.
*deleteQuestionTemplateSync* | *DELETE* /trivia/questions/templates/{id} | Delete a question template.
*deleteQuestionTemplateASync* | *DELETE* /trivia/questions/templates/{id} | Delete a question template.
*getImportJobSync* | *GET* /trivia/import/{id} | Get an import job.
*getImportJobASync* | *GET* /trivia/import/{id} | Get an import job.
*getImportJobsSync* | *GET* /trivia/import | Get a list of import job.
*getImportJobsASync* | *GET* /trivia/import | Get a list of import job.
*getQuestionSync* | *GET* /trivia/questions/{id} | Get a single question.
*getQuestionASync* | *GET* /trivia/questions/{id} | Get a single question.
*getQuestionAnswerSync* | *GET* /trivia/questions/{question_id}/answers/{id} | Get an answer for a question.
*getQuestionAnswerASync* | *GET* /trivia/questions/{question_id}/answers/{id} | Get an answer for a question.
*getQuestionAnswersSync* | *GET* /trivia/questions/{question_id}/answers | List the answers available for a question.
*getQuestionAnswersASync* | *GET* /trivia/questions/{question_id}/answers | List the answers available for a question.
*getQuestionDeltasSync* | *GET* /trivia/questions/delta | List question deltas in ascending order of updated date.
*getQuestionDeltasASync* | *GET* /trivia/questions/delta | List question deltas in ascending order of updated date.
*getQuestionTagsSync* | *GET* /trivia/questions/{id}/tags | List the tags for a question.
*getQuestionTagsASync* | *GET* /trivia/questions/{id}/tags | List the tags for a question.
*getQuestionTemplateSync* | *GET* /trivia/questions/templates/{id} | Get a single question template.
*getQuestionTemplateASync* | *GET* /trivia/questions/templates/{id} | Get a single question template.
*getQuestionTemplatesSync* | *GET* /trivia/questions/templates | List and search question templates.
*getQuestionTemplatesASync* | *GET* /trivia/questions/templates | List and search question templates.
*getQuestionsSync* | *GET* /trivia/questions | List and search questions.
*getQuestionsASync* | *GET* /trivia/questions | List and search questions.
*getQuestionsCountSync* | *GET* /trivia/questions/count | Count questions based on filters.
*getQuestionsCountASync* | *GET* /trivia/questions/count | Count questions based on filters.
*processImportJobSync* | *POST* /trivia/import/{id}/process | Start processing an import job.
*processImportJobASync* | *POST* /trivia/import/{id}/process | Start processing an import job.
*removeQuestionTagSync* | *DELETE* /trivia/questions/{id}/tags/{tag} | Remove a tag from a question.
*removeQuestionTagASync* | *DELETE* /trivia/questions/{id}/tags/{tag} | Remove a tag from a question.
*removeTagToQuestionsBatchSync* | *DELETE* /trivia/questions/tags/{tag} | Remove a tag from a batch of questions.
*removeTagToQuestionsBatchASync* | *DELETE* /trivia/questions/tags/{tag} | Remove a tag from a batch of questions.
*searchQuestionTagsSync* | *GET* /trivia/tags | List and search tags by the beginning of the string.
*searchQuestionTagsASync* | *GET* /trivia/tags | List and search tags by the beginning of the string.
*updateImportJobSync* | *PUT* /trivia/import/{id} | Update an import job.
*updateImportJobASync* | *PUT* /trivia/import/{id} | Update an import job.
*updateQuestionSync* | *PUT* /trivia/questions/{id} | Update a question.
*updateQuestionASync* | *PUT* /trivia/questions/{id} | Update a question.
*updateQuestionAnswerSync* | *PUT* /trivia/questions/{question_id}/answers/{id} | Update an answer for a question.
*updateQuestionAnswerASync* | *PUT* /trivia/questions/{question_id}/answers/{id} | Update an answer for a question.
*updateQuestionTemplateSync* | *PUT* /trivia/questions/templates/{id} | Update a question template.
*updateQuestionTemplateASync* | *PUT* /trivia/questions/templates/{id} | Update a question template.
*updateQuestionsInBulkSync* | *PUT* /trivia/questions | Bulk update questions.
*updateQuestionsInBulkASync* | *PUT* /trivia/questions | Bulk update questions.

### InvoicesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createInvoiceSync* | *POST* /invoices | Create an invoice.
*createInvoiceASync* | *POST* /invoices | Create an invoice.
*getFulFillmentStatusesSync* | *GET* /invoices/fulfillment-statuses | Lists available fulfillment statuses.
*getFulFillmentStatusesASync* | *GET* /invoices/fulfillment-statuses | Lists available fulfillment statuses.
*getInvoiceSync* | *GET* /invoices/{id} | Retrieve an invoice.
*getInvoiceASync* | *GET* /invoices/{id} | Retrieve an invoice.
*getInvoiceLogsSync* | *GET* /invoices/{id}/logs | List invoice logs.
*getInvoiceLogsASync* | *GET* /invoices/{id}/logs | List invoice logs.
*getInvoicesSync* | *GET* /invoices | Retrieve invoices.
*getInvoicesASync* | *GET* /invoices | Retrieve invoices.
*getPaymentStatusesSync* | *GET* /invoices/payment-statuses | Lists available payment statuses.
*getPaymentStatusesASync* | *GET* /invoices/payment-statuses | Lists available payment statuses.
*payInvoiceSync* | *POST* /invoices/{id}/payments | Pay an invoice using a saved payment method.
*payInvoiceASync* | *POST* /invoices/{id}/payments | Pay an invoice using a saved payment method.
*setBundledInvoiceItemFulfillmentStatusSync* | *PUT* /invoices/{id}/items/{bundleSku}/bundled-skus/{sku}/fulfillment-status | Set the fulfillment status of a bundled invoice item.
*setBundledInvoiceItemFulfillmentStatusASync* | *PUT* /invoices/{id}/items/{bundleSku}/bundled-skus/{sku}/fulfillment-status | Set the fulfillment status of a bundled invoice item.
*setExternalRefSync* | *PUT* /invoices/{id}/external-ref | Set the external reference of an invoice.
*setExternalRefASync* | *PUT* /invoices/{id}/external-ref | Set the external reference of an invoice.
*setInvoiceItemFulfillmentStatusSync* | *PUT* /invoices/{id}/items/{sku}/fulfillment-status | Set the fulfillment status of an invoice item.
*setInvoiceItemFulfillmentStatusASync* | *PUT* /invoices/{id}/items/{sku}/fulfillment-status | Set the fulfillment status of an invoice item.
*setOrderNotesSync* | *PUT* /invoices/{id}/order-notes | Set the order notes of an invoice.
*setOrderNotesASync* | *PUT* /invoices/{id}/order-notes | Set the order notes of an invoice.
*setPaymentStatusSync* | *PUT* /invoices/{id}/payment-status | Set the payment status of an invoice.
*setPaymentStatusASync* | *PUT* /invoices/{id}/payment-status | Set the payment status of an invoice.
*updateBillingInfoSync* | *PUT* /invoices/{id}/billing-address | Set or update billing info.
*updateBillingInfoASync* | *PUT* /invoices/{id}/billing-address | Set or update billing info.

### LocationsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getCountriesSync* | *GET* /location/countries | Get a list of countries.
*getCountriesASync* | *GET* /location/countries | Get a list of countries.
*getCountryByGeoLocationSync* | *GET* /location/geolocation/country | Get the iso3 code of your country.
*getCountryByGeoLocationASync* | *GET* /location/geolocation/country | Get the iso3 code of your country.
*getCountryStatesSync* | *GET* /location/countries/{country_code_iso3}/states | Get a list of a country's states.
*getCountryStatesASync* | *GET* /location/countries/{country_code_iso3}/states | Get a list of a country's states.
*getCurrencyByGeoLocationSync* | *GET* /location/geolocation/currency | Get the currency information of your country.
*getCurrencyByGeoLocationASync* | *GET* /location/geolocation/currency | Get the currency information of your country.

### LogsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addUserLogSync* | *POST* /audit/logs | Add a user log entry.
*addUserLogASync* | *POST* /audit/logs | Add a user log entry.
*getBREEventLogSync* | *GET* /bre/logs/event-log/{id} | Get an existing BRE event log entry by id.
*getBREEventLogASync* | *GET* /bre/logs/event-log/{id} | Get an existing BRE event log entry by id.
*getBREEventLogsSync* | *GET* /bre/logs/event-log | Returns a list of BRE event log entries.
*getBREEventLogsASync* | *GET* /bre/logs/event-log | Returns a list of BRE event log entries.
*getBREForwardLogSync* | *GET* /bre/logs/forward-log/{id} | Get an existing forward log entry by id.
*getBREForwardLogASync* | *GET* /bre/logs/forward-log/{id} | Get an existing forward log entry by id.
*getBREForwardLogsSync* | *GET* /bre/logs/forward-log | Returns a list of forward log entries.
*getBREForwardLogsASync* | *GET* /bre/logs/forward-log | Returns a list of forward log entries.
*getUserLogSync* | *GET* /audit/logs/{id} | Returns a user log entry by id.
*getUserLogASync* | *GET* /audit/logs/{id} | Returns a user log entry by id.
*getUserLogsSync* | *GET* /audit/logs | Returns a page of user logs entries.
*getUserLogsASync* | *GET* /audit/logs | Returns a page of user logs entries.

### MediaArtistsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addArtistSync* | *POST* /media/artists | Adds a new artist in the system.
*addArtistASync* | *POST* /media/artists | Adds a new artist in the system.
*createArtistTemplateSync* | *POST* /media/artists/templates | Create an artist template.
*createArtistTemplateASync* | *POST* /media/artists/templates | Create an artist template.
*deleteArtistSync* | *DELETE* /media/artists/{id} | Removes an artist from the system IF no resources are attached to it.
*deleteArtistASync* | *DELETE* /media/artists/{id} | Removes an artist from the system IF no resources are attached to it.
*deleteArtistTemplateSync* | *DELETE* /media/artists/templates/{id} | Delete an artist template.
*deleteArtistTemplateASync* | *DELETE* /media/artists/templates/{id} | Delete an artist template.
*getArtistSync* | *GET* /media/artists/{id} | Loads a specific artist details.
*getArtistASync* | *GET* /media/artists/{id} | Loads a specific artist details.
*getArtistTemplateSync* | *GET* /media/artists/templates/{id} | Get a single artist template.
*getArtistTemplateASync* | *GET* /media/artists/templates/{id} | Get a single artist template.
*getArtistTemplatesSync* | *GET* /media/artists/templates | List and search artist templates.
*getArtistTemplatesASync* | *GET* /media/artists/templates | List and search artist templates.
*getArtistsSync* | *GET* /media/artists | Search for artists.
*getArtistsASync* | *GET* /media/artists | Search for artists.
*updateArtistSync* | *PUT* /media/artists/{id} | Modifies an artist details.
*updateArtistASync* | *PUT* /media/artists/{id} | Modifies an artist details.
*updateArtistTemplateSync* | *PUT* /media/artists/templates/{id} | Update an artist template.
*updateArtistTemplateASync* | *PUT* /media/artists/templates/{id} | Update an artist template.

### MediaModerationManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addFlagSync* | *POST* /moderation/flags | Add a flag.
*addFlagASync* | *POST* /moderation/flags | Add a flag.
*deleteFlagSync* | *DELETE* /moderation/flags | Delete a flag.
*deleteFlagASync* | *DELETE* /moderation/flags | Delete a flag.
*getFlagsSync* | *GET* /moderation/flags | Returns a page of flags.
*getFlagsASync* | *GET* /moderation/flags | Returns a page of flags.
*getModerationReportSync* | *GET* /moderation/reports/{id} | Get a flag report.
*getModerationReportASync* | *GET* /moderation/reports/{id} | Get a flag report.
*getModerationReportsSync* | *GET* /moderation/reports | Returns a page of flag reports.
*getModerationReportsASync* | *GET* /moderation/reports | Returns a page of flag reports.
*updateModerationReportSync* | *PUT* /moderation/reports/{id} | Update a flag report.
*updateModerationReportASync* | *PUT* /moderation/reports/{id} | Update a flag report.

### MediaVideosManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addUserToVideoWhitelistSync* | *POST* /media/videos/{id}/whitelist | Adds a user to a video's whitelist.
*addUserToVideoWhitelistASync* | *POST* /media/videos/{id}/whitelist | Adds a user to a video's whitelist.
*addVideoSync* | *POST* /media/videos | Adds a new video in the system.
*addVideoASync* | *POST* /media/videos | Adds a new video in the system.
*addVideoCommentSync* | *POST* /media/videos/{video_id}/comments | Add a new video comment.
*addVideoCommentASync* | *POST* /media/videos/{video_id}/comments | Add a new video comment.
*addVideoContributorSync* | *POST* /media/videos/{video_id}/contributors | Adds a contributor to a video.
*addVideoContributorASync* | *POST* /media/videos/{video_id}/contributors | Adds a contributor to a video.
*addVideoFlagSync* | *POST* /media/videos/{video_id}/moderation | Add a new flag.
*addVideoFlagASync* | *POST* /media/videos/{video_id}/moderation | Add a new flag.
*addVideoRelationshipsSync* | *POST* /media/videos/{video_id}/related | Adds one or more existing videos as related to this one.
*addVideoRelationshipsASync* | *POST* /media/videos/{video_id}/related | Adds one or more existing videos as related to this one.
*createVideoDispositionSync* | *POST* /media/videos/{video_id}/dispositions | Create a video disposition.
*createVideoDispositionASync* | *POST* /media/videos/{video_id}/dispositions | Create a video disposition.
*deleteVideoSync* | *DELETE* /media/videos/{id} | Deletes a video from the system if no resources are attached to it.
*deleteVideoASync* | *DELETE* /media/videos/{id} | Deletes a video from the system if no resources are attached to it.
*deleteVideoCommentSync* | *DELETE* /media/videos/{video_id}/comments/{id} | Delete a video comment.
*deleteVideoCommentASync* | *DELETE* /media/videos/{video_id}/comments/{id} | Delete a video comment.
*deleteVideoDispositionSync* | *DELETE* /media/videos/{video_id}/dispositions/{disposition_id} | Delete a video disposition.
*deleteVideoDispositionASync* | *DELETE* /media/videos/{video_id}/dispositions/{disposition_id} | Delete a video disposition.
*deleteVideoFlagSync* | *DELETE* /media/videos/{video_id}/moderation | Delete a flag.
*deleteVideoFlagASync* | *DELETE* /media/videos/{video_id}/moderation | Delete a flag.
*deleteVideoRelationshipSync* | *DELETE* /media/videos/{video_id}/related/{id} | Delete a video's relationship.
*deleteVideoRelationshipASync* | *DELETE* /media/videos/{video_id}/related/{id} | Delete a video's relationship.
*getUserVideosSync* | *GET* /users/{user_id}/videos | Get user videos.
*getUserVideosASync* | *GET* /users/{user_id}/videos | Get user videos.
*getVideoSync* | *GET* /media/videos/{id} | Loads a specific video details.
*getVideoASync* | *GET* /media/videos/{id} | Loads a specific video details.
*getVideoCommentsSync* | *GET* /media/videos/{video_id}/comments | Returns a page of comments for a video.
*getVideoCommentsASync* | *GET* /media/videos/{video_id}/comments | Returns a page of comments for a video.
*getVideoDispositionsSync* | *GET* /media/videos/{video_id}/dispositions | Returns a page of dispositions for a video.
*getVideoDispositionsASync* | *GET* /media/videos/{video_id}/dispositions | Returns a page of dispositions for a video.
*getVideoRelationshipsSync* | *GET* /media/videos/{video_id}/related | Returns a page of video relationships.
*getVideoRelationshipsASync* | *GET* /media/videos/{video_id}/related | Returns a page of video relationships.
*getVideosSync* | *GET* /media/videos | Search videos using the documented filters.
*getVideosASync* | *GET* /media/videos | Search videos using the documented filters.
*removeUserFromVideoWhitelistSync* | *DELETE* /media/videos/{video_id}/whitelist/{id} | Removes a user from a video's whitelist.
*removeUserFromVideoWhitelistASync* | *DELETE* /media/videos/{video_id}/whitelist/{id} | Removes a user from a video's whitelist.
*removeVideoContributorSync* | *DELETE* /media/videos/{video_id}/contributors/{id} | Removes a contributor from a video.
*removeVideoContributorASync* | *DELETE* /media/videos/{video_id}/contributors/{id} | Removes a contributor from a video.
*updateVideoSync* | *PUT* /media/videos/{id} | Modifies a video's details.
*updateVideoASync* | *PUT* /media/videos/{id} | Modifies a video's details.
*updateVideoCommentSync* | *PUT* /media/videos/{video_id}/comments/{id}/content | Update a video comment.
*updateVideoCommentASync* | *PUT* /media/videos/{video_id}/comments/{id}/content | Update a video comment.
*updateVideoRelationshipSync* | *PUT* /media/videos/{video_id}/related/{id}/relationship_details | Update a video's relationship details.
*updateVideoRelationshipASync* | *PUT* /media/videos/{video_id}/related/{id}/relationship_details | Update a video's relationship details.
*viewVideoSync* | *POST* /media/videos/{id}/views | Increment a video's view count.
*viewVideoASync* | *POST* /media/videos/{id}/views | Increment a video's view count.

### MessagingManager
Method | HTTP request | Description
------------- | ------------- | -------------
*sendRawEmailSync* | *POST* /messaging/raw-email | Send a raw email to one or more users.
*sendRawEmailASync* | *POST* /messaging/raw-email | Send a raw email to one or more users.
*sendRawPushSync* | *POST* /messaging/raw-push | Send a raw push notification.
*sendRawPushASync* | *POST* /messaging/raw-push | Send a raw push notification.
*sendRawSMSSync* | *POST* /messaging/raw-sms | Send a raw SMS.
*sendRawSMSASync* | *POST* /messaging/raw-sms | Send a raw SMS.
*sendTemplatedEmailSync* | *POST* /messaging/templated-email | Send a templated email to one or more users.
*sendTemplatedEmailASync* | *POST* /messaging/templated-email | Send a templated email to one or more users.
*sendTemplatedPushSync* | *POST* /messaging/templated-push | Send a templated push notification.
*sendTemplatedPushASync* | *POST* /messaging/templated-push | Send a templated push notification.
*sendTemplatedSMSSync* | *POST* /messaging/templated-sms | Send a new templated SMS.
*sendTemplatedSMSASync* | *POST* /messaging/templated-sms | Send a new templated SMS.

### ObjectsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createObjectItemSync* | *POST* /objects/{template_id} | Create an object.
*createObjectItemASync* | *POST* /objects/{template_id} | Create an object.
*createObjectTemplateSync* | *POST* /objects/templates | Create an object template.
*createObjectTemplateASync* | *POST* /objects/templates | Create an object template.
*deleteObjectItemSync* | *DELETE* /objects/{template_id}/{object_id} | Delete an object.
*deleteObjectItemASync* | *DELETE* /objects/{template_id}/{object_id} | Delete an object.
*deleteObjectTemplateSync* | *DELETE* /objects/templates/{id} | Delete an entitlement template.
*deleteObjectTemplateASync* | *DELETE* /objects/templates/{id} | Delete an entitlement template.
*getObjectItemSync* | *GET* /objects/{template_id}/{object_id} | Get a single object.
*getObjectItemASync* | *GET* /objects/{template_id}/{object_id} | Get a single object.
*getObjectItemsSync* | *GET* /objects/{template_id} | List and search objects.
*getObjectItemsASync* | *GET* /objects/{template_id} | List and search objects.
*getObjectTemplateSync* | *GET* /objects/templates/{id} | Get a single entitlement template.
*getObjectTemplateASync* | *GET* /objects/templates/{id} | Get a single entitlement template.
*getObjectTemplatesSync* | *GET* /objects/templates | List and search entitlement templates.
*getObjectTemplatesASync* | *GET* /objects/templates | List and search entitlement templates.
*updateObjectItemSync* | *PUT* /objects/{template_id}/{object_id} | Update an object.
*updateObjectItemASync* | *PUT* /objects/{template_id}/{object_id} | Update an object.
*updateObjectTemplateSync* | *PUT* /objects/templates/{id} | Update an entitlement template.
*updateObjectTemplateASync* | *PUT* /objects/templates/{id} | Update an entitlement template.

### PaymentsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createPaymentMethodSync* | *POST* /users/{user_id}/payment-methods | Create a new payment method for a user.
*createPaymentMethodASync* | *POST* /users/{user_id}/payment-methods | Create a new payment method for a user.
*deletePaymentMethodSync* | *DELETE* /users/{user_id}/payment-methods/{id} | Delete an existing payment method for a user.
*deletePaymentMethodASync* | *DELETE* /users/{user_id}/payment-methods/{id} | Delete an existing payment method for a user.
*getPaymentMethodSync* | *GET* /users/{user_id}/payment-methods/{id} | Get a single payment method for a user.
*getPaymentMethodASync* | *GET* /users/{user_id}/payment-methods/{id} | Get a single payment method for a user.
*getPaymentMethodTypeSync* | *GET* /payment/types/{id} | Get a single payment method type.
*getPaymentMethodTypeASync* | *GET* /payment/types/{id} | Get a single payment method type.
*getPaymentMethodTypesSync* | *GET* /payment/types | Get all payment method types.
*getPaymentMethodTypesASync* | *GET* /payment/types | Get all payment method types.
*getPaymentMethodsSync* | *GET* /users/{user_id}/payment-methods | Get all payment methods for a user.
*getPaymentMethodsASync* | *GET* /users/{user_id}/payment-methods | Get all payment methods for a user.
*paymentAuthorizationSync* | *POST* /payment/authorizations | Authorize payment of an invoice for later capture.
*paymentAuthorizationASync* | *POST* /payment/authorizations | Authorize payment of an invoice for later capture.
*paymentCaptureSync* | *POST* /payment/authorizations/{id}/capture | Capture an existing invoice payment authorization.
*paymentCaptureASync* | *POST* /payment/authorizations/{id}/capture | Capture an existing invoice payment authorization.
*updatePaymentMethodSync* | *PUT* /users/{user_id}/payment-methods/{id} | Update an existing payment method for a user.
*updatePaymentMethodASync* | *PUT* /users/{user_id}/payment-methods/{id} | Update an existing payment method for a user.

### PaymentsAppleManager
Method | HTTP request | Description
------------- | ------------- | -------------
*verifyAppleReceiptSync* | *POST* /payment/provider/apple/receipt | Pay invoice with Apple receipt.
*verifyAppleReceiptASync* | *POST* /payment/provider/apple/receipt | Pay invoice with Apple receipt.

### PaymentsFattMerchantManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createOrUpdateFattMerchantPaymentMethodSync* | *PUT* /payment/provider/fattmerchant/payment-methods | Create or update a FattMerchant payment method for a user.
*createOrUpdateFattMerchantPaymentMethodASync* | *PUT* /payment/provider/fattmerchant/payment-methods | Create or update a FattMerchant payment method for a user.

### PaymentsGoogleManager
Method | HTTP request | Description
------------- | ------------- | -------------
*handleGooglePaymentSync* | *POST* /payment/provider/google/payments | Mark an invoice paid with Google.
*handleGooglePaymentASync* | *POST* /payment/provider/google/payments | Mark an invoice paid with Google.

### PaymentsOptimalManager
Method | HTTP request | Description
------------- | ------------- | -------------
*silentPostOptimalSync* | *POST* /payment/provider/optimal/silent | Initiate silent post with Optimal.
*silentPostOptimalASync* | *POST* /payment/provider/optimal/silent | Initiate silent post with Optimal.

### PaymentsPayPalClassicManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createPayPalBillingAgreementUrlSync* | *POST* /payment/provider/paypal/classic/agreements/start | Create a PayPal Classic billing agreement for the user.
*createPayPalBillingAgreementUrlASync* | *POST* /payment/provider/paypal/classic/agreements/start | Create a PayPal Classic billing agreement for the user.
*createPayPalExpressCheckoutSync* | *POST* /payment/provider/paypal/classic/checkout/start | Create a payment token for PayPal express checkout.
*createPayPalExpressCheckoutASync* | *POST* /payment/provider/paypal/classic/checkout/start | Create a payment token for PayPal express checkout.
*finalizePayPalBillingAgreementSync* | *POST* /payment/provider/paypal/classic/agreements/finish | Finalizes a billing agreement after the user has accepted through PayPal.
*finalizePayPalBillingAgreementASync* | *POST* /payment/provider/paypal/classic/agreements/finish | Finalizes a billing agreement after the user has accepted through PayPal.
*finalizePayPalCheckoutSync* | *POST* /payment/provider/paypal/classic/checkout/finish | Finalizes a payment after the user has completed checkout with PayPal.
*finalizePayPalCheckoutASync* | *POST* /payment/provider/paypal/classic/checkout/finish | Finalizes a payment after the user has completed checkout with PayPal.

### PaymentsStripeManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createStripePaymentMethodSync* | *POST* /payment/provider/stripe/payment-methods | Create a Stripe payment method for a user.
*createStripePaymentMethodASync* | *POST* /payment/provider/stripe/payment-methods | Create a Stripe payment method for a user.
*payStripeInvoiceSync* | *POST* /payment/provider/stripe/payments | Pay with a single use token.
*payStripeInvoiceASync* | *POST* /payment/provider/stripe/payments | Pay with a single use token.

### PaymentsTransactionsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getTransactionSync* | *GET* /transactions/{id} | Get the details for a single transaction.
*getTransactionASync* | *GET* /transactions/{id} | Get the details for a single transaction.
*getTransactionsSync* | *GET* /transactions | List and search transactions.
*getTransactionsASync* | *GET* /transactions | List and search transactions.
*refundTransactionSync* | *POST* /transactions/{id}/refunds | Refund a payment transaction, in full or in part.
*refundTransactionASync* | *POST* /transactions/{id}/refunds | Refund a payment transaction, in full or in part.

### PaymentsWalletsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getUserWalletSync* | *GET* /users/{user_id}/wallets/{currency_code} | Returns the user's wallet for the given currency code.
*getUserWalletASync* | *GET* /users/{user_id}/wallets/{currency_code} | Returns the user's wallet for the given currency code.
*getUserWalletTransactionsSync* | *GET* /users/{user_id}/wallets/{currency_code}/transactions | Retrieve a user's wallet transactions.
*getUserWalletTransactionsASync* | *GET* /users/{user_id}/wallets/{currency_code}/transactions | Retrieve a user's wallet transactions.
*getUserWalletsSync* | *GET* /users/{user_id}/wallets | List all of a user's wallets.
*getUserWalletsASync* | *GET* /users/{user_id}/wallets | List all of a user's wallets.
*getWalletBalancesSync* | *GET* /wallets/totals | Retrieves a summation of wallet balances by currency code.
*getWalletBalancesASync* | *GET* /wallets/totals | Retrieves a summation of wallet balances by currency code.
*getWalletTransactionsSync* | *GET* /wallets/transactions | Retrieve wallet transactions across the system.
*getWalletTransactionsASync* | *GET* /wallets/transactions | Retrieve wallet transactions across the system.
*getWalletsSync* | *GET* /wallets | Retrieve a list of wallets across the system.
*getWalletsASync* | *GET* /wallets | Retrieve a list of wallets across the system.
*updateWalletBalanceSync* | *PUT* /users/{user_id}/wallets/{currency_code}/balance | Updates the balance for a user's wallet.
*updateWalletBalanceASync* | *PUT* /users/{user_id}/wallets/{currency_code}/balance | Updates the balance for a user's wallet.

### PaymentsXsollaManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createXsollaTokenUrlSync* | *POST* /payment/provider/xsolla/payment | Create a payment token that should be used to forward the user to Xsolla so they can complete payment.
*createXsollaTokenUrlASync* | *POST* /payment/provider/xsolla/payment | Create a payment token that should be used to forward the user to Xsolla so they can complete payment.

### ReportingChallengesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getChallengeEventLeaderboardSync* | *GET* /reporting/events/leaderboard | Retrieve a challenge event leaderboard details.
*getChallengeEventLeaderboardASync* | *GET* /reporting/events/leaderboard | Retrieve a challenge event leaderboard details.
*getChallengeEventParticipantsSync* | *GET* /reporting/events/participants | Retrieve a challenge event participant details.
*getChallengeEventParticipantsASync* | *GET* /reporting/events/participants | Retrieve a challenge event participant details.

### ReportingOrdersManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getInvoiceReportsSync* | *GET* /reporting/orders/count/{currency_code} | Retrieve invoice counts aggregated by time ranges.
*getInvoiceReportsASync* | *GET* /reporting/orders/count/{currency_code} | Retrieve invoice counts aggregated by time ranges.

### ReportingRevenueManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getItemRevenueSync* | *GET* /reporting/revenue/item-sales/{currency_code} | Get item revenue info.
*getItemRevenueASync* | *GET* /reporting/revenue/item-sales/{currency_code} | Get item revenue info.
*getRefundRevenueSync* | *GET* /reporting/revenue/refunds/{currency_code} | Get refund revenue info.
*getRefundRevenueASync* | *GET* /reporting/revenue/refunds/{currency_code} | Get refund revenue info.
*getRevenueByCountrySync* | *GET* /reporting/revenue/countries/{currency_code} | Get revenue info by country.
*getRevenueByCountryASync* | *GET* /reporting/revenue/countries/{currency_code} | Get revenue info by country.
*getRevenueByItemSync* | *GET* /reporting/revenue/products/{currency_code} | Get revenue info by item.
*getRevenueByItemASync* | *GET* /reporting/revenue/products/{currency_code} | Get revenue info by item.
*getSubscriptionRevenueSync* | *GET* /reporting/revenue/subscription-sales/{currency_code} | Get subscription revenue info.
*getSubscriptionRevenueASync* | *GET* /reporting/revenue/subscription-sales/{currency_code} | Get subscription revenue info.

### ReportingSubscriptionsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getSubscriptionReportsSync* | *GET* /reporting/subscription | Get a list of available subscription reports in most recent first order.
*getSubscriptionReportsASync* | *GET* /reporting/subscription | Get a list of available subscription reports in most recent first order.

### ReportingUsageManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getUsageByDaySync* | *GET* /reporting/usage/day | Returns aggregated endpoint usage information by day.
*getUsageByDayASync* | *GET* /reporting/usage/day | Returns aggregated endpoint usage information by day.
*getUsageByHourSync* | *GET* /reporting/usage/hour | Returns aggregated endpoint usage information by hour.
*getUsageByHourASync* | *GET* /reporting/usage/hour | Returns aggregated endpoint usage information by hour.
*getUsageByMinuteSync* | *GET* /reporting/usage/minute | Returns aggregated endpoint usage information by minute.
*getUsageByMinuteASync* | *GET* /reporting/usage/minute | Returns aggregated endpoint usage information by minute.
*getUsageByMonthSync* | *GET* /reporting/usage/month | Returns aggregated endpoint usage information by month.
*getUsageByMonthASync* | *GET* /reporting/usage/month | Returns aggregated endpoint usage information by month.
*getUsageByYearSync* | *GET* /reporting/usage/year | Returns aggregated endpoint usage information by year.
*getUsageByYearASync* | *GET* /reporting/usage/year | Returns aggregated endpoint usage information by year.
*getUsageEndpointsSync* | *GET* /reporting/usage/endpoints | Returns list of endpoints called (method and url).
*getUsageEndpointsASync* | *GET* /reporting/usage/endpoints | Returns list of endpoints called (method and url).

### ReportingUsersManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getUserRegistrationsSync* | *GET* /reporting/users/registrations | Get user registration info.
*getUserRegistrationsASync* | *GET* /reporting/users/registrations | Get user registration info.

### SearchManager
Method | HTTP request | Description
------------- | ------------- | -------------
*searchIndexSync* | *POST* /search/index/{type} | Search an index with no template.
*searchIndexASync* | *POST* /search/index/{type} | Search an index with no template.
*searchIndexWithTemplateSync* | *POST* /search/index/{type}/{template} | Search an index with a template.
*searchIndexWithTemplateASync* | *POST* /search/index/{type}/{template} | Search an index with a template.

### SocialFacebookManager
Method | HTTP request | Description
------------- | ------------- | -------------
*linkAccountsSync* | *POST* /social/facebook/users | Link facebook account.
*linkAccountsASync* | *POST* /social/facebook/users | Link facebook account.

### SocialGoogleManager
Method | HTTP request | Description
------------- | ------------- | -------------
*linkAccounts1Sync* | *POST* /social/google/users | Link google account.
*linkAccounts1ASync* | *POST* /social/google/users | Link google account.

### StoreManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createItemTemplateSync* | *POST* /store/items/templates | Create an item template.
*createItemTemplateASync* | *POST* /store/items/templates | Create an item template.
*createStoreItemSync* | *POST* /store/items | Create a store item.
*createStoreItemASync* | *POST* /store/items | Create a store item.
*deleteItemTemplateSync* | *DELETE* /store/items/templates/{id} | Delete an item template.
*deleteItemTemplateASync* | *DELETE* /store/items/templates/{id} | Delete an item template.
*deleteStoreItemSync* | *DELETE* /store/items/{id} | Delete a store item.
*deleteStoreItemASync* | *DELETE* /store/items/{id} | Delete a store item.
*getBehaviorsSync* | *GET* /store/items/behaviors | List available item behaviors.
*getBehaviorsASync* | *GET* /store/items/behaviors | List available item behaviors.
*getItemTemplateSync* | *GET* /store/items/templates/{id} | Get a single item template.
*getItemTemplateASync* | *GET* /store/items/templates/{id} | Get a single item template.
*getItemTemplatesSync* | *GET* /store/items/templates | List and search item templates.
*getItemTemplatesASync* | *GET* /store/items/templates | List and search item templates.
*getStoreItemSync* | *GET* /store/items/{id} | Get a single store item.
*getStoreItemASync* | *GET* /store/items/{id} | Get a single store item.
*getStoreItemsSync* | *GET* /store/items | List and search store items.
*getStoreItemsASync* | *GET* /store/items | List and search store items.
*quickBuySync* | *POST* /store/quick-buy | One-step purchase and pay for a single SKU item from a user's wallet.
*quickBuyASync* | *POST* /store/quick-buy | One-step purchase and pay for a single SKU item from a user's wallet.
*updateItemTemplateSync* | *PUT* /store/items/templates/{id} | Update an item template.
*updateItemTemplateASync* | *PUT* /store/items/templates/{id} | Update an item template.
*updateStoreItemSync* | *PUT* /store/items/{id} | Update a store item.
*updateStoreItemASync* | *PUT* /store/items/{id} | Update a store item.

### StoreBundlesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createBundleItemSync* | *POST* /store/bundles | Create a bundle item.
*createBundleItemASync* | *POST* /store/bundles | Create a bundle item.
*createBundleTemplateSync* | *POST* /store/bundles/templates | Create a bundle template.
*createBundleTemplateASync* | *POST* /store/bundles/templates | Create a bundle template.
*deleteBundleItemSync* | *DELETE* /store/bundles/{id} | Delete a bundle item.
*deleteBundleItemASync* | *DELETE* /store/bundles/{id} | Delete a bundle item.
*deleteBundleTemplateSync* | *DELETE* /store/bundles/templates/{id} | Delete a bundle template.
*deleteBundleTemplateASync* | *DELETE* /store/bundles/templates/{id} | Delete a bundle template.
*getBundleItemSync* | *GET* /store/bundles/{id} | Get a single bundle item.
*getBundleItemASync* | *GET* /store/bundles/{id} | Get a single bundle item.
*getBundleTemplateSync* | *GET* /store/bundles/templates/{id} | Get a single bundle template.
*getBundleTemplateASync* | *GET* /store/bundles/templates/{id} | Get a single bundle template.
*getBundleTemplatesSync* | *GET* /store/bundles/templates | List and search bundle templates.
*getBundleTemplatesASync* | *GET* /store/bundles/templates | List and search bundle templates.
*updateBundleItemSync* | *PUT* /store/bundles/{id} | Update a bundle item.
*updateBundleItemASync* | *PUT* /store/bundles/{id} | Update a bundle item.
*updateBundleTemplateSync* | *PUT* /store/bundles/templates/{id} | Update a bundle template.
*updateBundleTemplateASync* | *PUT* /store/bundles/templates/{id} | Update a bundle template.

### StoreCouponsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createCouponItemSync* | *POST* /store/coupons | Create a coupon item.
*createCouponItemASync* | *POST* /store/coupons | Create a coupon item.
*createCouponTemplateSync* | *POST* /store/coupons/templates | Create a coupon template.
*createCouponTemplateASync* | *POST* /store/coupons/templates | Create a coupon template.
*deleteCouponItemSync* | *DELETE* /store/coupons/{id} | Delete a coupon item.
*deleteCouponItemASync* | *DELETE* /store/coupons/{id} | Delete a coupon item.
*deleteCouponTemplateSync* | *DELETE* /store/coupons/templates/{id} | Delete a coupon template.
*deleteCouponTemplateASync* | *DELETE* /store/coupons/templates/{id} | Delete a coupon template.
*getCouponItemSync* | *GET* /store/coupons/{id} | Get a single coupon item.
*getCouponItemASync* | *GET* /store/coupons/{id} | Get a single coupon item.
*getCouponItemBySkuSync* | *GET* /store/coupons/skus/{sku} | Get a coupon by sku.
*getCouponItemBySkuASync* | *GET* /store/coupons/skus/{sku} | Get a coupon by sku.
*getCouponTemplateSync* | *GET* /store/coupons/templates/{id} | Get a single coupon template.
*getCouponTemplateASync* | *GET* /store/coupons/templates/{id} | Get a single coupon template.
*getCouponTemplatesSync* | *GET* /store/coupons/templates | List and search coupon templates.
*getCouponTemplatesASync* | *GET* /store/coupons/templates | List and search coupon templates.
*updateCouponItemSync* | *PUT* /store/coupons/{id} | Update a coupon item.
*updateCouponItemASync* | *PUT* /store/coupons/{id} | Update a coupon item.
*updateCouponTemplateSync* | *PUT* /store/coupons/templates/{id} | Update a coupon template.
*updateCouponTemplateASync* | *PUT* /store/coupons/templates/{id} | Update a coupon template.

### StoreSalesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createCatalogSaleSync* | *POST* /store/sales | Create a sale.
*createCatalogSaleASync* | *POST* /store/sales | Create a sale.
*deleteCatalogSaleSync* | *DELETE* /store/sales/{id} | Delete a sale.
*deleteCatalogSaleASync* | *DELETE* /store/sales/{id} | Delete a sale.
*getCatalogSaleSync* | *GET* /store/sales/{id} | Get a single sale.
*getCatalogSaleASync* | *GET* /store/sales/{id} | Get a single sale.
*getCatalogSalesSync* | *GET* /store/sales | List and search sales.
*getCatalogSalesASync* | *GET* /store/sales | List and search sales.
*updateCatalogSaleSync* | *PUT* /store/sales/{id} | Update a sale.
*updateCatalogSaleASync* | *PUT* /store/sales/{id} | Update a sale.

### StoreShippingManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createShippingItemSync* | *POST* /store/shipping | Create a shipping item.
*createShippingItemASync* | *POST* /store/shipping | Create a shipping item.
*createShippingTemplateSync* | *POST* /store/shipping/templates | Create a shipping template.
*createShippingTemplateASync* | *POST* /store/shipping/templates | Create a shipping template.
*deleteShippingItemSync* | *DELETE* /store/shipping/{id} | Delete a shipping item.
*deleteShippingItemASync* | *DELETE* /store/shipping/{id} | Delete a shipping item.
*deleteShippingTemplateSync* | *DELETE* /store/shipping/templates/{id} | Delete a shipping template.
*deleteShippingTemplateASync* | *DELETE* /store/shipping/templates/{id} | Delete a shipping template.
*getShippingItemSync* | *GET* /store/shipping/{id} | Get a single shipping item.
*getShippingItemASync* | *GET* /store/shipping/{id} | Get a single shipping item.
*getShippingTemplateSync* | *GET* /store/shipping/templates/{id} | Get a single shipping template.
*getShippingTemplateASync* | *GET* /store/shipping/templates/{id} | Get a single shipping template.
*getShippingTemplatesSync* | *GET* /store/shipping/templates | List and search shipping templates.
*getShippingTemplatesASync* | *GET* /store/shipping/templates | List and search shipping templates.
*updateShippingItemSync* | *PUT* /store/shipping/{id} | Update a shipping item.
*updateShippingItemASync* | *PUT* /store/shipping/{id} | Update a shipping item.
*updateShippingTemplateSync* | *PUT* /store/shipping/templates/{id} | Update a shipping template.
*updateShippingTemplateASync* | *PUT* /store/shipping/templates/{id} | Update a shipping template.

### StoreShoppingCartsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addCustomDiscountSync* | *POST* /carts/{id}/custom-discounts | Adds a custom discount to the cart.
*addCustomDiscountASync* | *POST* /carts/{id}/custom-discounts | Adds a custom discount to the cart.
*addDiscountToCartSync* | *POST* /carts/{id}/discounts | Adds a discount coupon to the cart.
*addDiscountToCartASync* | *POST* /carts/{id}/discounts | Adds a discount coupon to the cart.
*addItemToCartSync* | *POST* /carts/{id}/items | Add an item to the cart.
*addItemToCartASync* | *POST* /carts/{id}/items | Add an item to the cart.
*createCartSync* | *POST* /carts | Create a cart.
*createCartASync* | *POST* /carts | Create a cart.
*getCartSync* | *GET* /carts/{id} | Returns the cart with the given GUID.
*getCartASync* | *GET* /carts/{id} | Returns the cart with the given GUID.
*getCartsSync* | *GET* /carts | Get a list of carts.
*getCartsASync* | *GET* /carts | Get a list of carts.
*getShippableSync* | *GET* /carts/{id}/shippable | Returns whether a cart requires shipping.
*getShippableASync* | *GET* /carts/{id}/shippable | Returns whether a cart requires shipping.
*getShippingCountriesSync* | *GET* /carts/{id}/countries | Get the list of available shipping countries per vendor.
*getShippingCountriesASync* | *GET* /carts/{id}/countries | Get the list of available shipping countries per vendor.
*removeDiscountFromCartSync* | *DELETE* /carts/{id}/discounts/{code} | Removes a discount coupon from the cart.
*removeDiscountFromCartASync* | *DELETE* /carts/{id}/discounts/{code} | Removes a discount coupon from the cart.
*setCartCurrencySync* | *PUT* /carts/{id}/currency | Sets the currency to use for the cart.
*setCartCurrencyASync* | *PUT* /carts/{id}/currency | Sets the currency to use for the cart.
*setCartOwnerSync* | *PUT* /carts/{id}/owner | Sets the owner of a cart if none is set already.
*setCartOwnerASync* | *PUT* /carts/{id}/owner | Sets the owner of a cart if none is set already.
*updateItemInCartSync* | *PUT* /carts/{id}/items | Changes the quantity of an item already in the cart.
*updateItemInCartASync* | *PUT* /carts/{id}/items | Changes the quantity of an item already in the cart.
*updateShippingAddressSync* | *PUT* /carts/{id}/shipping-address | Modifies or sets the order shipping address.
*updateShippingAddressASync* | *PUT* /carts/{id}/shipping-address | Modifies or sets the order shipping address.

### StoreSubscriptionsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createSubscriptionSync* | *POST* /subscriptions | Creates a subscription item and associated plans.
*createSubscriptionASync* | *POST* /subscriptions | Creates a subscription item and associated plans.
*createSubscriptionTemplateSync* | *POST* /subscriptions/templates | Create a subscription template.
*createSubscriptionTemplateASync* | *POST* /subscriptions/templates | Create a subscription template.
*deleteSubscriptionSync* | *DELETE* /subscriptions/{id}/plans/{plan_id} | Delete a subscription plan.
*deleteSubscriptionASync* | *DELETE* /subscriptions/{id}/plans/{plan_id} | Delete a subscription plan.
*deleteSubscriptionTemplateSync* | *DELETE* /subscriptions/templates/{id} | Delete a subscription template.
*deleteSubscriptionTemplateASync* | *DELETE* /subscriptions/templates/{id} | Delete a subscription template.
*getSubscriptionSync* | *GET* /subscriptions/{id} | Retrieve a single subscription item and associated plans.
*getSubscriptionASync* | *GET* /subscriptions/{id} | Retrieve a single subscription item and associated plans.
*getSubscriptionTemplateSync* | *GET* /subscriptions/templates/{id} | Get a single subscription template.
*getSubscriptionTemplateASync* | *GET* /subscriptions/templates/{id} | Get a single subscription template.
*getSubscriptionTemplatesSync* | *GET* /subscriptions/templates | List and search subscription templates.
*getSubscriptionTemplatesASync* | *GET* /subscriptions/templates | List and search subscription templates.
*getSubscriptionsSync* | *GET* /subscriptions | List available subscription items and associated plans.
*getSubscriptionsASync* | *GET* /subscriptions | List available subscription items and associated plans.
*processSubscriptionsSync* | *POST* /subscriptions/process | Processes subscriptions and charge dues.
*processSubscriptionsASync* | *POST* /subscriptions/process | Processes subscriptions and charge dues.
*updateSubscriptionSync* | *PUT* /subscriptions/{id} | Updates a subscription item and associated plans.
*updateSubscriptionASync* | *PUT* /subscriptions/{id} | Updates a subscription item and associated plans.
*updateSubscriptionTemplateSync* | *PUT* /subscriptions/templates/{id} | Update a subscription template.
*updateSubscriptionTemplateASync* | *PUT* /subscriptions/templates/{id} | Update a subscription template.

### StoreVendorsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createVendorSync* | *POST* /vendors | Create a vendor.
*createVendorASync* | *POST* /vendors | Create a vendor.
*createVendorTemplateSync* | *POST* /vendors/templates | Create a vendor template.
*createVendorTemplateASync* | *POST* /vendors/templates | Create a vendor template.
*deleteVendorSync* | *DELETE* /vendors/{id} | Delete a vendor.
*deleteVendorASync* | *DELETE* /vendors/{id} | Delete a vendor.
*deleteVendorTemplateSync* | *DELETE* /vendors/templates/{id} | Delete a vendor template.
*deleteVendorTemplateASync* | *DELETE* /vendors/templates/{id} | Delete a vendor template.
*getVendorSync* | *GET* /vendors/{id} | Get a single vendor.
*getVendorASync* | *GET* /vendors/{id} | Get a single vendor.
*getVendorTemplateSync* | *GET* /vendors/templates/{id} | Get a single vendor template.
*getVendorTemplateASync* | *GET* /vendors/templates/{id} | Get a single vendor template.
*getVendorTemplatesSync* | *GET* /vendors/templates | List and search vendor templates.
*getVendorTemplatesASync* | *GET* /vendors/templates | List and search vendor templates.
*getVendorsSync* | *GET* /vendors | List and search vendors.
*getVendorsASync* | *GET* /vendors | List and search vendors.
*updateVendorSync* | *PUT* /vendors/{id} | Update a vendor.
*updateVendorASync* | *PUT* /vendors/{id} | Update a vendor.
*updateVendorTemplateSync* | *PUT* /vendors/templates/{id} | Update a vendor template.
*updateVendorTemplateASync* | *PUT* /vendors/templates/{id} | Update a vendor template.

### TaxesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createCountryTaxSync* | *POST* /tax/countries | Create a country tax.
*createCountryTaxASync* | *POST* /tax/countries | Create a country tax.
*createStateTaxSync* | *POST* /tax/countries/{country_code_iso3}/states | Create a state tax.
*createStateTaxASync* | *POST* /tax/countries/{country_code_iso3}/states | Create a state tax.
*deleteCountryTaxSync* | *DELETE* /tax/countries/{country_code_iso3} | Delete an existing tax.
*deleteCountryTaxASync* | *DELETE* /tax/countries/{country_code_iso3} | Delete an existing tax.
*deleteStateTaxSync* | *DELETE* /tax/countries/{country_code_iso3}/states/{state_code} | Delete an existing state tax.
*deleteStateTaxASync* | *DELETE* /tax/countries/{country_code_iso3}/states/{state_code} | Delete an existing state tax.
*getCountryTaxSync* | *GET* /tax/countries/{country_code_iso3} | Get a single tax.
*getCountryTaxASync* | *GET* /tax/countries/{country_code_iso3} | Get a single tax.
*getCountryTaxesSync* | *GET* /tax/countries | List and search taxes.
*getCountryTaxesASync* | *GET* /tax/countries | List and search taxes.
*getStateTaxSync* | *GET* /tax/countries/{country_code_iso3}/states/{state_code} | Get a single state tax.
*getStateTaxASync* | *GET* /tax/countries/{country_code_iso3}/states/{state_code} | Get a single state tax.
*getStateTaxesForCountriesSync* | *GET* /tax/states | List and search taxes across all countries.
*getStateTaxesForCountriesASync* | *GET* /tax/states | List and search taxes across all countries.
*getStateTaxesForCountrySync* | *GET* /tax/countries/{country_code_iso3}/states | List and search taxes within a country.
*getStateTaxesForCountryASync* | *GET* /tax/countries/{country_code_iso3}/states | List and search taxes within a country.
*updateCountryTaxSync* | *PUT* /tax/countries/{country_code_iso3} | Create or update a tax.
*updateCountryTaxASync* | *PUT* /tax/countries/{country_code_iso3} | Create or update a tax.
*updateStateTaxSync* | *PUT* /tax/countries/{country_code_iso3}/states/{state_code} | Create or update a state tax.
*updateStateTaxASync* | *PUT* /tax/countries/{country_code_iso3}/states/{state_code} | Create or update a state tax.

### TemplatesPropertiesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getTemplatePropertyTypeSync* | *GET* /templates/properties/{type} | Get details for a template property type.
*getTemplatePropertyTypeASync* | *GET* /templates/properties/{type} | Get details for a template property type.
*getTemplatePropertyTypesSync* | *GET* /templates/properties | List template property types.
*getTemplatePropertyTypesASync* | *GET* /templates/properties | List template property types.

### UsersManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addUserTagSync* | *POST* /users/{user_id}/tags | Add a tag to a user.
*addUserTagASync* | *POST* /users/{user_id}/tags | Add a tag to a user.
*createUserTemplateSync* | *POST* /users/templates | Create a user template.
*createUserTemplateASync* | *POST* /users/templates | Create a user template.
*deleteUserTemplateSync* | *DELETE* /users/templates/{id} | Delete a user template.
*deleteUserTemplateASync* | *DELETE* /users/templates/{id} | Delete a user template.
*getUserSync* | *GET* /users/{id} | Get a single user.
*getUserASync* | *GET* /users/{id} | Get a single user.
*getUserTagsSync* | *GET* /users/{user_id}/tags | List tags for a user.
*getUserTagsASync* | *GET* /users/{user_id}/tags | List tags for a user.
*getUserTemplateSync* | *GET* /users/templates/{id} | Get a single user template.
*getUserTemplateASync* | *GET* /users/templates/{id} | Get a single user template.
*getUserTemplatesSync* | *GET* /users/templates | List and search user templates.
*getUserTemplatesASync* | *GET* /users/templates | List and search user templates.
*getUsersSync* | *GET* /users | List and search users.
*getUsersASync* | *GET* /users | List and search users.
*passwordResetSync* | *PUT* /users/{id}/password-reset | Choose a new password after a reset.
*passwordResetASync* | *PUT* /users/{id}/password-reset | Choose a new password after a reset.
*registerUserSync* | *POST* /users | Register a new user.
*registerUserASync* | *POST* /users | Register a new user.
*removeUserTagSync* | *DELETE* /users/{user_id}/tags/{tag} | Remove a tag from a user.
*removeUserTagASync* | *DELETE* /users/{user_id}/tags/{tag} | Remove a tag from a user.
*setPasswordSync* | *PUT* /users/{id}/password | Set a user's password.
*setPasswordASync* | *PUT* /users/{id}/password | Set a user's password.
*startPasswordResetSync* | *POST* /users/{id}/password-reset | Reset a user's password.
*startPasswordResetASync* | *POST* /users/{id}/password-reset | Reset a user's password.
*submitPasswordResetSync* | *POST* /users/password-reset | Reset a user's password without user id.
*submitPasswordResetASync* | *POST* /users/password-reset | Reset a user's password without user id.
*updateUserSync* | *PUT* /users/{id} | Update a user.
*updateUserASync* | *PUT* /users/{id} | Update a user.
*updateUserTemplateSync* | *PUT* /users/templates/{id} | Update a user template.
*updateUserTemplateASync* | *PUT* /users/templates/{id} | Update a user template.

### UsersAddressesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createAddressSync* | *POST* /users/{user_id}/addresses | Create a new address.
*createAddressASync* | *POST* /users/{user_id}/addresses | Create a new address.
*deleteAddressSync* | *DELETE* /users/{user_id}/addresses/{id} | Delete an address.
*deleteAddressASync* | *DELETE* /users/{user_id}/addresses/{id} | Delete an address.
*getAddressSync* | *GET* /users/{user_id}/addresses/{id} | Get a single address.
*getAddressASync* | *GET* /users/{user_id}/addresses/{id} | Get a single address.
*getAddressesSync* | *GET* /users/{user_id}/addresses | List and search addresses.
*getAddressesASync* | *GET* /users/{user_id}/addresses | List and search addresses.
*updateAddressSync* | *PUT* /users/{user_id}/addresses/{id} | Update an address.
*updateAddressASync* | *PUT* /users/{user_id}/addresses/{id} | Update an address.

### UsersFriendshipsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addFriendSync* | *POST* /users/{user_id}/friends/{id} | Add a friend.
*addFriendASync* | *POST* /users/{user_id}/friends/{id} | Add a friend.
*getFriendsSync* | *GET* /users/{user_id}/friends | Get friends list.
*getFriendsASync* | *GET* /users/{user_id}/friends | Get friends list.
*getInviteTokenSync* | *GET* /users/{user_id}/invite-token | Returns the invite token.
*getInviteTokenASync* | *GET* /users/{user_id}/invite-token | Returns the invite token.
*getInvitesSync* | *GET* /users/{user_id}/invites | Get pending invites.
*getInvitesASync* | *GET* /users/{user_id}/invites | Get pending invites.
*redeemFriendshipTokenSync* | *POST* /users/{user_id}/friends/tokens | Redeem friendship token.
*redeemFriendshipTokenASync* | *POST* /users/{user_id}/friends/tokens | Redeem friendship token.
*removeOrDeclineFriendSync* | *DELETE* /users/{user_id}/friends/{id} | Remove or decline a friend.
*removeOrDeclineFriendASync* | *DELETE* /users/{user_id}/friends/{id} | Remove or decline a friend.

### UsersGroupsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addMemberToGroupSync* | *POST* /users/groups/{unique_name}/members | Adds a new member to the group.
*addMemberToGroupASync* | *POST* /users/groups/{unique_name}/members | Adds a new member to the group.
*addMembersToGroupSync* | *POST* /users/groups/{unique_name}/members/batch-add | Adds multiple members to the group.
*addMembersToGroupASync* | *POST* /users/groups/{unique_name}/members/batch-add | Adds multiple members to the group.
*createGroupSync* | *POST* /users/groups | Create a group.
*createGroupASync* | *POST* /users/groups | Create a group.
*createGroupMemberTemplateSync* | *POST* /users/groups/members/templates | Create an group member template.
*createGroupMemberTemplateASync* | *POST* /users/groups/members/templates | Create an group member template.
*createGroupTemplateSync* | *POST* /users/groups/templates | Create a group template.
*createGroupTemplateASync* | *POST* /users/groups/templates | Create a group template.
*deleteGroupSync* | *DELETE* /users/groups/{unique_name} | Removes a group from the system.
*deleteGroupASync* | *DELETE* /users/groups/{unique_name} | Removes a group from the system.
*deleteGroupMemberTemplateSync* | *DELETE* /users/groups/members/templates/{id} | Delete an group member template.
*deleteGroupMemberTemplateASync* | *DELETE* /users/groups/members/templates/{id} | Delete an group member template.
*deleteGroupTemplateSync* | *DELETE* /users/groups/templates/{id} | Delete a group template.
*deleteGroupTemplateASync* | *DELETE* /users/groups/templates/{id} | Delete a group template.
*getGroupSync* | *GET* /users/groups/{unique_name} | Loads a specific group's details.
*getGroupASync* | *GET* /users/groups/{unique_name} | Loads a specific group's details.
*getGroupAncestorsSync* | *GET* /users/groups/{unique_name}/ancestors | Get group ancestors.
*getGroupAncestorsASync* | *GET* /users/groups/{unique_name}/ancestors | Get group ancestors.
*getGroupMemberSync* | *GET* /users/groups/{unique_name}/members/{user_id} | Get a user from a group.
*getGroupMemberASync* | *GET* /users/groups/{unique_name}/members/{user_id} | Get a user from a group.
*getGroupMemberTemplateSync* | *GET* /users/groups/members/templates/{id} | Get a single group member template.
*getGroupMemberTemplateASync* | *GET* /users/groups/members/templates/{id} | Get a single group member template.
*getGroupMemberTemplatesSync* | *GET* /users/groups/members/templates | List and search group member templates.
*getGroupMemberTemplatesASync* | *GET* /users/groups/members/templates | List and search group member templates.
*getGroupMembersSync* | *GET* /users/groups/{unique_name}/members | Lists members of the group.
*getGroupMembersASync* | *GET* /users/groups/{unique_name}/members | Lists members of the group.
*getGroupTemplateSync* | *GET* /users/groups/templates/{id} | Get a single group template.
*getGroupTemplateASync* | *GET* /users/groups/templates/{id} | Get a single group template.
*getGroupTemplatesSync* | *GET* /users/groups/templates | List and search group templates.
*getGroupTemplatesASync* | *GET* /users/groups/templates | List and search group templates.
*getGroupsForUserSync* | *GET* /users/{user_id}/groups | List groups a user is in.
*getGroupsForUserASync* | *GET* /users/{user_id}/groups | List groups a user is in.
*listGroupsSync* | *GET* /users/groups | List and search groups.
*listGroupsASync* | *GET* /users/groups | List and search groups.
*removeGroupMemberSync* | *DELETE* /users/groups/{unique_name}/members/{user_id} | Removes a user from a group.
*removeGroupMemberASync* | *DELETE* /users/groups/{unique_name}/members/{user_id} | Removes a user from a group.
*updateGroupSync* | *PUT* /users/groups/{unique_name} | Update a group.
*updateGroupASync* | *PUT* /users/groups/{unique_name} | Update a group.
*updateGroupMemberPropertiesSync* | *PUT* /users/groups/{unique_name}/members/{user_id}/order | Change a user's order.
*updateGroupMemberPropertiesASync* | *PUT* /users/groups/{unique_name}/members/{user_id}/order | Change a user's order.
*updateGroupMemberProperties1Sync* | *PUT* /users/groups/{unique_name}/members/{user_id}/properties | Change a user's membership properties.
*updateGroupMemberProperties1ASync* | *PUT* /users/groups/{unique_name}/members/{user_id}/properties | Change a user's membership properties.
*updateGroupMemberStatusSync* | *PUT* /users/groups/{unique_name}/members/{user_id}/status | Change a user's status.
*updateGroupMemberStatusASync* | *PUT* /users/groups/{unique_name}/members/{user_id}/status | Change a user's status.
*updateGroupMemberTemplateSync* | *PUT* /users/groups/members/templates/{id} | Update an group member template.
*updateGroupMemberTemplateASync* | *PUT* /users/groups/members/templates/{id} | Update an group member template.
*updateGroupTemplateSync* | *PUT* /users/groups/templates/{id} | Update a group template.
*updateGroupTemplateASync* | *PUT* /users/groups/templates/{id} | Update a group template.

### UsersInventoryManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addItemToUserInventorySync* | *POST* /users/{id}/inventory | Adds an item to the user inventory.
*addItemToUserInventoryASync* | *POST* /users/{id}/inventory | Adds an item to the user inventory.
*checkUserEntitlementItemSync* | *GET* /users/{user_id}/entitlements/{item_id}/check | Check for access to an item without consuming.
*checkUserEntitlementItemASync* | *GET* /users/{user_id}/entitlements/{item_id}/check | Check for access to an item without consuming.
*createEntitlementItemSync* | *POST* /entitlements | Create an entitlement item.
*createEntitlementItemASync* | *POST* /entitlements | Create an entitlement item.
*createEntitlementTemplateSync* | *POST* /entitlements/templates | Create an entitlement template.
*createEntitlementTemplateASync* | *POST* /entitlements/templates | Create an entitlement template.
*deleteEntitlementItemSync* | *DELETE* /entitlements/{entitlement_id} | Delete an entitlement item.
*deleteEntitlementItemASync* | *DELETE* /entitlements/{entitlement_id} | Delete an entitlement item.
*deleteEntitlementTemplateSync* | *DELETE* /entitlements/templates/{id} | Delete an entitlement template.
*deleteEntitlementTemplateASync* | *DELETE* /entitlements/templates/{id} | Delete an entitlement template.
*getEntitlementItemSync* | *GET* /entitlements/{entitlement_id} | Get a single entitlement item.
*getEntitlementItemASync* | *GET* /entitlements/{entitlement_id} | Get a single entitlement item.
*getEntitlementItemsSync* | *GET* /entitlements | List and search entitlement items.
*getEntitlementItemsASync* | *GET* /entitlements | List and search entitlement items.
*getEntitlementTemplateSync* | *GET* /entitlements/templates/{id} | Get a single entitlement template.
*getEntitlementTemplateASync* | *GET* /entitlements/templates/{id} | Get a single entitlement template.
*getEntitlementTemplatesSync* | *GET* /entitlements/templates | List and search entitlement templates.
*getEntitlementTemplatesASync* | *GET* /entitlements/templates | List and search entitlement templates.
*getUserInventoriesSync* | *GET* /users/{id}/inventory | List the user inventory entries for a given user.
*getUserInventoriesASync* | *GET* /users/{id}/inventory | List the user inventory entries for a given user.
*getUserInventorySync* | *GET* /users/{user_id}/inventory/{id} | Get an inventory entry.
*getUserInventoryASync* | *GET* /users/{user_id}/inventory/{id} | Get an inventory entry.
*getUserInventoryLogSync* | *GET* /users/{user_id}/inventory/{id}/log | List the log entries for this inventory entry.
*getUserInventoryLogASync* | *GET* /users/{user_id}/inventory/{id}/log | List the log entries for this inventory entry.
*getUsersInventorySync* | *GET* /inventories | List the user inventory entries for all users.
*getUsersInventoryASync* | *GET* /inventories | List the user inventory entries for all users.
*grantUserEntitlementSync* | *POST* /users/{user_id}/entitlements | Grant an entitlement.
*grantUserEntitlementASync* | *POST* /users/{user_id}/entitlements | Grant an entitlement.
*updateEntitlementItemSync* | *PUT* /entitlements/{entitlement_id} | Update an entitlement item.
*updateEntitlementItemASync* | *PUT* /entitlements/{entitlement_id} | Update an entitlement item.
*updateEntitlementTemplateSync* | *PUT* /entitlements/templates/{id} | Update an entitlement template.
*updateEntitlementTemplateASync* | *PUT* /entitlements/templates/{id} | Update an entitlement template.
*updateUserInventoryBehaviorDataSync* | *PUT* /users/{user_id}/inventory/{id}/behavior-data | Set the behavior data for an inventory entry.
*updateUserInventoryBehaviorDataASync* | *PUT* /users/{user_id}/inventory/{id}/behavior-data | Set the behavior data for an inventory entry.
*updateUserInventoryExpiresSync* | *PUT* /users/{user_id}/inventory/{id}/expires | Set the expiration date.
*updateUserInventoryExpiresASync* | *PUT* /users/{user_id}/inventory/{id}/expires | Set the expiration date.
*updateUserInventoryStatusSync* | *PUT* /users/{user_id}/inventory/{id}/status | Set the status for an inventory entry.
*updateUserInventoryStatusASync* | *PUT* /users/{user_id}/inventory/{id}/status | Set the status for an inventory entry.
*useUserEntitlementItemSync* | *POST* /users/{user_id}/entitlements/{item_id}/use | Use an item.
*useUserEntitlementItemASync* | *POST* /users/{user_id}/entitlements/{item_id}/use | Use an item.

### UsersRelationshipsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createUserRelationshipSync* | *POST* /users/relationships | Create a user relationship.
*createUserRelationshipASync* | *POST* /users/relationships | Create a user relationship.
*deleteUserRelationshipSync* | *DELETE* /users/relationships/{id} | Delete a user relationship.
*deleteUserRelationshipASync* | *DELETE* /users/relationships/{id} | Delete a user relationship.
*getUserRelationshipSync* | *GET* /users/relationships/{id} | Get a user relationship.
*getUserRelationshipASync* | *GET* /users/relationships/{id} | Get a user relationship.
*getUserRelationshipsSync* | *GET* /users/relationships | Get a list of user relationships.
*getUserRelationshipsASync* | *GET* /users/relationships | Get a list of user relationships.
*updateUserRelationshipSync* | *PUT* /users/relationships/{id} | Update a user relationship.
*updateUserRelationshipASync* | *PUT* /users/relationships/{id} | Update a user relationship.

### UsersSubscriptionsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getUserSubscriptionDetailsSync* | *GET* /users/{user_id}/subscriptions/{inventory_id} | Get details about a user's subscription.
*getUserSubscriptionDetailsASync* | *GET* /users/{user_id}/subscriptions/{inventory_id} | Get details about a user's subscription.
*getUsersSubscriptionDetailsSync* | *GET* /users/{user_id}/subscriptions | Get details about a user's subscriptions.
*getUsersSubscriptionDetailsASync* | *GET* /users/{user_id}/subscriptions | Get details about a user's subscriptions.
*reactivateUserSubscriptionSync* | *POST* /users/{user_id}/subscriptions/{inventory_id}/reactivate | Reactivate a subscription and charge fee.
*reactivateUserSubscriptionASync* | *POST* /users/{user_id}/subscriptions/{inventory_id}/reactivate | Reactivate a subscription and charge fee.
*setSubscriptionBillDateSync* | *PUT* /users/{user_id}/subscriptions/{inventory_id}/bill-date | Set a new date to bill a subscription on.
*setSubscriptionBillDateASync* | *PUT* /users/{user_id}/subscriptions/{inventory_id}/bill-date | Set a new date to bill a subscription on.
*setSubscriptionPaymentMethodSync* | *PUT* /users/{user_id}/subscriptions/{inventory_id}/payment-method | Set the payment method to use for a subscription.
*setSubscriptionPaymentMethodASync* | *PUT* /users/{user_id}/subscriptions/{inventory_id}/payment-method | Set the payment method to use for a subscription.
*setSubscriptionStatusSync* | *PUT* /users/{user_id}/subscriptions/{inventory_id}/status | Set the status of a subscription.
*setSubscriptionStatusASync* | *PUT* /users/{user_id}/subscriptions/{inventory_id}/status | Set the status of a subscription.
*setUserSubscriptionPlanSync* | *PUT* /users/{user_id}/subscriptions/{inventory_id}/plan | Set a new subscription plan for a user.
*setUserSubscriptionPlanASync* | *PUT* /users/{user_id}/subscriptions/{inventory_id}/plan | Set a new subscription plan for a user.
*setUserSubscriptionPriceSync* | *PUT* /users/{user_id}/subscriptions/{inventory_id}/price-override | Set a new subscription price for a user.
*setUserSubscriptionPriceASync* | *PUT* /users/{user_id}/subscriptions/{inventory_id}/price-override | Set a new subscription price for a user.

### UtilBatchManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getBatchSync* | *GET* /batch/{token} | Get batch result with token.
*getBatchASync* | *GET* /batch/{token} | Get batch result with token.
*sendBatchSync* | *POST* /batch | Request to run API call given the method, content type, path url, and body of request.
*sendBatchASync* | *POST* /batch | Request to run API call given the method, content type, path url, and body of request.

### UtilHealthManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getHealthSync* | *GET* /health | Get health info.
*getHealthASync* | *GET* /health | Get health info.

### UtilMaintenanceManager
Method | HTTP request | Description
------------- | ------------- | -------------
*deleteMaintenanceSync* | *DELETE* /maintenance | Delete maintenance info.
*deleteMaintenanceASync* | *DELETE* /maintenance | Delete maintenance info.
*getMaintenanceSync* | *GET* /maintenance | Get current maintenance info.
*getMaintenanceASync* | *GET* /maintenance | Get current maintenance info.
*setMaintenanceSync* | *POST* /maintenance | Set current maintenance info.
*setMaintenanceASync* | *POST* /maintenance | Set current maintenance info.
*updateMaintenanceSync* | *PUT* /maintenance | Update current maintenance info.
*updateMaintenanceASync* | *PUT* /maintenance | Update current maintenance info.

### UtilSecurityManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getUserLocationLogSync* | *GET* /security/country-log | Returns the authentication log for a user.
*getUserLocationLogASync* | *GET* /security/country-log | Returns the authentication log for a user.
*getUserTokenDetailsSync* | *GET* /me | Returns the authentication token details. Use /users endpoint for detailed user's info.
*getUserTokenDetailsASync* | *GET* /me | Returns the authentication token details. Use /users endpoint for detailed user's info.

### UtilVersionManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getVersionSync* | *GET* /version | Get current version info.
*getVersionASync* | *GET* /version | Get current version info.


## What are the Model files for the data structures/objects?
Class | Description
------------- | -------------
 *AchievementDefinitionResource* | 
 *ActionContext«object»* | 
 *ActionResource* | 
 *ActionVariableResource* | 
 *ActivityEntitlementResource* | 
 *ActivityOccurrenceCreationFailure* | 
 *ActivityOccurrenceJoinResult* | 
 *ActivityOccurrenceResource* | A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings
 *ActivityOccurrenceResults* | 
 *ActivityOccurrenceResultsResource* | 
 *ActivityResource* | Represents an activity that can be parameterized and tracked through metrics (scores, etc)
 *ActivityUserResource* | 
 *AddressResource* | 
 *AggregateCountResource* | 
 *AggregateInvoiceReportResource* | 
 *AmazonS3Activity* | 
 *AnswerResource* | 
 *ApplyPaymentRequest* | 
 *ArgumentResource* | 
 *ArticleResource* | 
 *ArtistResource* | 
 *AvailableSettingResource* | The definition of an activity parameters: ex: difficulty level
 *BareActivityResource* | 
 *BareChallengeActivityResource* | 
 *Batch* | 
 *BatchRequest* | 
 *BatchResult* | 
 *BatchReturn* | 
 *Behavior* | 
 *BehaviorDefinitionResource* | 
 *BillingReport* | 
 *BooleanResource* | 
 *BreCategoryResource* | 
 *BreEvent* | 
 *BreEventLog* | 
 *BreGlobalResource* | 
 *BreGlobalScopeDefinition* | 
 *BreRule* | 
 *BreRuleLog* | 
 *BreTriggerParameterDefinition* | 
 *BreTriggerResource* | 
 *BroadcastableEvent* | 
 *BundledSku* | 
 *CampaignResource* | 
 *Cart* | 
 *CartItemRequest* | 
 *CartLineItem* | 
 *CartShippableResponse* | 
 *CartShippingAddressRequest* | 
 *CartShippingOption* | 
 *CartSummary* | 
 *CatalogSale* | 
 *CategoryResource* | 
 *ChallengeActivityResource* | 
 *ChallengeEventParticipantResource* | 
 *ChallengeEventResource* | 
 *ChallengeResource* | 
 *ClientResource* | 
 *CommentResource* | 
 *Config* | 
 *ConfigLookupResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *ConstantResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *ContributionResource* | 
 *Country* | 
 *CountryResource* | 
 *CountryTaxResource* | 
 *CouponDefinition* | 
 *CreateActivityOccurrenceRequest* | A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings
 *CreateBillingAgreementRequest* | 
 *CreatePayPalPaymentRequest* | 
 *CurrencyResource* | 
 *CustomerConfig* | 
 *DatabaseConfig* | 
 *DateOperationResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *DefaultOperationResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *DeltaResource* | 
 *DeviceResource* | 
 *Discount* | 
 *DispositionCount* | 
 *DispositionResource* | 
 *DoubleOperationResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *EntitlementGrantRequest* | 
 *ErrorResource* | 
 *EventContextResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *ExpressionResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *Expression«object»* | 
 *FacebookToken* | 
 *FattMerchantPaymentMethod* | 
 *FattMerchantPaymentMethodRequest* | 
 *FinalizeBillingAgreementRequest* | 
 *FinalizePayPalPaymentRequest* | 
 *FlagReportResource* | 
 *FlagResource* | 
 *ForwardLog* | 
 *FulfillmentType* | 
 *GlobalCheckAndIncrementResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *GlobalResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *GooglePaymentRequest* | 
 *GoogleToken* | 
 *GrantTypeResource* | 
 *GroupMemberResource* | 
 *GroupResource* | 
 *IOConfig* | 
 *IdRef* | 
 *ImportJobOutputResource* | 
 *ImportJobResource* | 
 *IntWrapper* | 
 *IntegerOperationResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *InventorySubscriptionResource* | 
 *InvoiceCreateRequest* | 
 *InvoiceItemResource* | 
 *InvoiceLogEntry* | 
 *InvoicePaymentStatusRequest* | 
 *InvoiceResource* | 
 *Item* | 
 *ItemBehaviorDefinitionResource* | 
 *ItemIdRequest* | 
 *ItemTemplateResource* | 
 *KeyValuePair«string,string»* | 
 *LeaderboardEntryResource* | 
 *LeaderboardResource* | 
 *LevelingResource* | 
 *LimitedGettableGroup* | 
 *LocationLogResource* | 
 *LookupResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *Maintenance* | 
 *MapResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *Map«string,object»* | 
 *MetricResource* | 
 *MongoDatabaseConfig* | 
 *NestedCategory* | 
 *NewPasswordRequest* | 
 *OAuth2Resource* | 
 *OauthAccessTokenResource* | 
 *ObjectResource* | 
 *OperationDefinitionResource* | 
 *OperationResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *Operator* | 
 *OptimalPaymentRequest* | 
 *Order* | 
 *PageResource«AchievementDefinitionResource»* | 
 *PageResource«ActivityOccurrenceResource»* | 
 *PageResource«AggregateCountResource»* | 
 *PageResource«AggregateInvoiceReportResource»* | 
 *PageResource«ArticleResource»* | 
 *PageResource«ArtistResource»* | 
 *PageResource«BareActivityResource»* | 
 *PageResource«BareChallengeActivityResource»* | 
 *PageResource«BillingReport»* | 
 *PageResource«BreCategoryResource»* | 
 *PageResource«BreEventLog»* | 
 *PageResource«BreGlobalResource»* | 
 *PageResource«BreRule»* | 
 *PageResource«BreTriggerResource»* | 
 *PageResource«CampaignResource»* | 
 *PageResource«CartSummary»* | 
 *PageResource«CatalogSale»* | 
 *PageResource«CategoryResource»* | 
 *PageResource«ChallengeEventParticipantResource»* | 
 *PageResource«ChallengeEventResource»* | 
 *PageResource«ChallengeResource»* | 
 *PageResource«ClientResource»* | 
 *PageResource«CommentResource»* | 
 *PageResource«Config»* | 
 *PageResource«CountryTaxResource»* | 
 *PageResource«CurrencyResource»* | 
 *PageResource«DeviceResource»* | 
 *PageResource«DispositionResource»* | 
 *PageResource«EntitlementItem»* | 
 *PageResource«FlagReportResource»* | 
 *PageResource«FlagResource»* | 
 *PageResource«ForwardLog»* | 
 *PageResource«FulfillmentType»* | 
 *PageResource«GroupMemberResource»* | 
 *PageResource«GroupResource»* | 
 *PageResource«ImportJobResource»* | 
 *PageResource«InvoiceLogEntry»* | 
 *PageResource«InvoiceResource»* | 
 *PageResource«ItemTemplateResource»* | 
 *PageResource«LevelingResource»* | 
 *PageResource«LocationLogResource»* | 
 *PageResource«Map«string,object»»* | 
 *PageResource«OauthAccessTokenResource»* | 
 *PageResource«ObjectResource»* | 
 *PageResource«PaymentMethodTypeResource»* | 
 *PageResource«PermissionResource»* | 
 *PageResource«PollResource»* | 
 *PageResource«QuestionResource»* | 
 *PageResource«QuestionTemplateResource»* | 
 *PageResource«RevenueCountryReportResource»* | 
 *PageResource«RevenueProductReportResource»* | 
 *PageResource«RewardSetResource»* | 
 *PageResource«RoleResource»* | 
 *PageResource«SavedAddressResource»* | 
 *PageResource«SimpleReferenceResource«object»»* | 
 *PageResource«SimpleUserResource»* | 
 *PageResource«SimpleWallet»* | 
 *PageResource«StateTaxResource»* | 
 *PageResource«StoreItemTemplateResource»* | 
 *PageResource«StoreItem»* | 
 *PageResource«SubscriptionResource»* | 
 *PageResource«SubscriptionTemplateResource»* | 
 *PageResource«TemplateResource»* | 
 *PageResource«TransactionResource»* | 
 *PageResource«UsageInfo»* | 
 *PageResource«UserAchievementGroupResource»* | 
 *PageResource«UserActionLog»* | 
 *PageResource«UserBaseResource»* | 
 *PageResource«UserInventoryResource»* | 
 *PageResource«UserItemLogResource»* | 
 *PageResource«UserLevelingResource»* | 
 *PageResource«UserRelationshipResource»* | 
 *PageResource«VendorResource»* | 
 *PageResource«VideoRelationshipResource»* | 
 *PageResource«VideoResource»* | 
 *PageResource«WalletTotalResponse»* | 
 *PageResource«WalletTransactionResource»* | 
 *PageResource«string»* | 
 *ParameterResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *Participant* | 
 *PasswordResetRequest* | A request to reset a user's password by using a known user property
 *PayBySavedMethodRequest* | 
 *PaymentAuthorizationResource* | 
 *PaymentMethodDetails* | 
 *PaymentMethodResource* | 
 *PaymentMethodTypeResource* | 
 *PermissionResource* | 
 *PollAnswerResource* | 
 *PollResource* | 
 *PollResponseResource* | 
 *PredicateResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *Property* | 
 *PropertyDefinitionResource* | 
 *PropertyFieldListResource* | 
 *PropertyFieldResource* | 
 *QuestionResource* | 
 *QuestionTemplateResource* | 
 *QuickBuyRequest* | 
 *RawEmailResource* | 
 *RawPushResource* | 
 *RawSMSResource* | 
 *ReactivateSubscriptionRequest* | 
 *RefundRequest* | 
 *RefundResource* | 
 *Result* | 
 *RevenueCountryReportResource* | 
 *RevenueProductReportResource* | 
 *RevenueReportResource* | 
 *RewardCurrencyResource* | 
 *RewardItemResource* | 
 *RewardSetResource* | 
 *RoleResource* | 
 *S3Config* | 
 *SampleCountriesResponse* | 
 *SavedAddressResource* | 
 *Schedule* | 
 *SelectedSettingRequest* | 
 *SelectedSettingResource* | 
 *SettingOption* | 
 *SimpleGroupResource* | 
 *SimpleReferenceResource«int»* | 
 *SimpleReferenceResource«long»* | 
 *SimpleReferenceResource«object»* | 
 *SimpleReferenceResource«string»* | 
 *SimpleUserResource* | 
 *SimpleWallet* | 
 *Sku* | 
 *SkuRequest* | 
 *SqlDatabaseConfig* | 
 *StateResource* | 
 *StateTaxResource* | 
 *StoreItemTemplateResource* | 
 *StringOperationResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *StringWrapper* | 
 *StripeCreatePaymentMethod* | 
 *StripePaymentRequest* | 
 *SubscriptionCreditResource* | 
 *SubscriptionPlan* | 
 *SubscriptionPlanResource* | 
 *SubscriptionPriceOverrideRequest* | 
 *SubscriptionResource* | 
 *SubscriptionTemplateResource* | 
 *TemplateEmailResource* | 
 *TemplatePushResource* | 
 *TemplateResource* | 
 *TemplateSMSResource* | 
 *TierResource* | 
 *TokenDetailsResource* | 
 *TransactionResource* | 
 *TypeHintLookupResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *UsageInfo* | 
 *UserAchievementGroupResource* | 
 *UserAchievementResource* | 
 *UserActionLog* | 
 *UserActivityResults* | 
 *UserActivityResultsResource* | 
 *UserBaseResource* | 
 *UserInventoryAddRequest* | 
 *UserInventoryResource* | 
 *UserItemLogResource* | 
 *UserLevelingResource* | 
 *UserRelationshipReferenceResource* | 
 *UserRelationshipResource* | 
 *UserResource* | 
 *UsernameLookupResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *VariableTypeResource* | 
 *VendorEmailLookupResource* | Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *VendorResource* | 
 *Version* | 
 *VideoRelationshipResource* | 
 *VideoResource* | 
 *WalletAlterRequest* | 
 *WalletTotalResponse* | 
 *WalletTransactionResource* | 
 *XsollaPaymentRequest* | 
 *AudioPropertyDefinitionResource* | 
 *BooleanProperty* | 
 *BooleanPropertyDefinitionResource* | 
 *CacheClearEvent* | 
 *Consumable* | 
 *DateProperty* | 
 *DatePropertyDefinitionResource* | 
 *DoubleProperty* | 
 *DoublePropertyDefinitionResource* | 
 *EntitlementItem* | 
 *Expirable* | 
 *FileGroupProperty* | 
 *FileGroupPropertyDefinitionResource* | 
 *FileProperty* | 
 *FilePropertyDefinitionResource* | 
 *FormattedTextProperty* | 
 *FormattedTextPropertyDefinitionResource* | 
 *Fulfillable* | 
 *GuestPlayable* | 
 *ImagePropertyDefinitionResource* | 
 *IntegerProperty* | 
 *IntegerPropertyDefinitionResource* | 
 *LimitedGettable* | 
 *ListProperty* | 
 *ListPropertyDefinitionResource* | 
 *LogLevelEvent* | 
 *LongProperty* | 
 *LongPropertyDefinitionResource* | 
 *MapProperty* | 
 *MapPropertyDefinitionResource* | 
 *MobileDeviceResource* | 
 *NewCustomerEvent* | 
 *PreReqEntitlement* | 
 *PriceOverridable* | 
 *RemoveCustomerEvent* | 
 *Spendable* | 
 *StoreItem* | 
 *TextProperty* | 
 *TextPropertyDefinitionResource* | 
 *TimePeriodGettable* | 
 *TimePeriodUsable* | 
 *VideoPropertyDefinitionResource* | 
 *AudioGroupProperty* | 
 *AudioGroupPropertyDefinitionResource* | 
 *AudioProperty* | 
 *BundleItem* | 
 *CouponItem* | 
 *ImageGroupProperty* | 
 *ImageGroupPropertyDefinitionResource* | 
 *ImageProperty* | 
 *ShippingItem* | 
 *Subscription* | 
 *VideoGroupProperty* | 
 *VideoGroupPropertyDefinitionResource* | 
 *VideoProperty* | 

