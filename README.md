# UnTag

> I realised that UE provides FCollection and GameplayTags already satisfy the most of needs, but it may depends on the
> specific project - such as some user may want a easier way to manage assets' tags, hence it is not a general solution
> as a light-weight plugin. This project is hold for now.


Asset Tagging System for Unreal Engine

- tagging assets by extending content browser context menu
- tags can be used as content browser filter, dynamically
- data table editor for tags

A `.untag` file is created for a tag, which is a text file with the same name as the tag, and contains a list of asset
paths, its our single source of truth for the tag.

We can extend the metadata for a tag by adding a row to the `UnTagMetadata` data table, metadata will be synced
to `.untag` file.
